/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file nr_mac_common.c
 * \brief Common MAC/PHY functions for NR UE and gNB
 * \author  Florian Kaltenberger and Raymond Knopp
 * \date 2019
 * \version 0.1
 * \company Eurecom, NTUST
 * \email: florian.kalteberger@eurecom.fr, raymond.knopp@eurecom.fr
 * @ingroup _mac

 */

#include "LAYER2/NR_MAC_gNB/mac_proto.h"

nr_bandentry_t nr_bandtable[] = {
  {1,  1920000, 1980000, 2110000, 2170000, 20, 422000},
  {2,  1850000, 1910000, 1930000, 1990000, 20, 386000},
  {3,  1710000, 1785000, 1805000, 1880000, 20, 361000},
  {5,   824000,  849000,  869000,  894000, 20, 173800},
  {7,  2500000, 2570000, 2620000, 2690000, 20, 524000},
  {8,   880000,  915000,  925000,  960000, 20, 185000},
  {12,  698000,  716000,  728000,  746000, 20, 145800},
  {20,  832000,  862000,  791000,  821000, 20, 158200},
  {25, 1850000, 1915000, 1930000, 1995000, 20, 386000},
  {28,  703000,  758000,  758000,  813000, 20, 151600},
  {34, 2010000, 2025000, 2010000, 2025000, 20, 402000},
  {38, 2570000, 2620000, 2570000, 2630000, 20, 514000},
  {39, 1880000, 1920000, 1880000, 1920000, 20, 376000},
  {40, 2300000, 2400000, 2300000, 2400000, 20, 460000},
  {41, 2496000, 2690000, 2496000, 2690000,  3, 499200},
  {50, 1432000, 1517000, 1432000, 1517000, 20, 286400},
  {51, 1427000, 1432000, 1427000, 1432000, 20, 285400},
  {66, 1710000, 1780000, 2110000, 2200000, 20, 422000},
  {70, 1695000, 1710000, 1995000, 2020000, 20, 399000},
  {71,  663000,  698000,  617000,  652000, 20, 123400},
  {74, 1427000, 1470000, 1475000, 1518000, 20, 295000},
  {75,     000,     000, 1432000, 1517000, 20, 286400},
  {76,     000,     000, 1427000, 1432000, 20, 285400},
  {77, 3300000, 4200000, 3300000, 4200000,  1, 620000},
  {78, 3300000, 3800000, 3300000, 3800000,  1, 620000},
  {79, 4400000, 5000000, 4400000, 5000000,  2, 693334},
  {80, 1710000, 1785000,     000,     000, 20, 342000},
  {81,  860000,  915000,     000,     000, 20, 176000},
  {82,  832000,  862000,     000,     000, 20, 166400},
  {83,  703000,  748000,     000,     000, 20, 140600},
  {84, 1920000, 1980000,     000,     000, 20, 384000},
  {86, 1710000, 1785000,     000,     000, 20, 342000}
};

#define NR_BANDTABLE_SIZE (sizeof(nr_bandtable)/sizeof(nr_bandentry_t))

void get_band(uint32_t downlink_frequency,
              uint16_t *current_band,
              int32_t *current_offset,
              lte_frame_type_t *current_type)
{
    int ind;
    uint64_t center_frequency_khz;
    uint64_t center_freq_diff_khz;
    uint64_t dl_freq_khz = downlink_frequency/1000;

    center_freq_diff_khz = 999999999999999999; // 2^64
    *current_band = 0;

    for ( ind=0;
          ind < sizeof(nr_bandtable) / sizeof(nr_bandtable[0]);
          ind++) {

      LOG_I(PHY, "Scanning band %d, dl_min %"PRIu64", ul_min %"PRIu64"\n", nr_bandtable[ind].band, nr_bandtable[ind].dl_min,nr_bandtable[ind].ul_min);

      if ( nr_bandtable[ind].dl_min <= dl_freq_khz && nr_bandtable[ind].dl_max >= dl_freq_khz ) {

        center_frequency_khz = (nr_bandtable[ind].dl_max + nr_bandtable[ind].dl_min)/2;

        if (abs(dl_freq_khz - center_frequency_khz) < center_freq_diff_khz){

          *current_band = nr_bandtable[ind].band;
	        *current_offset = (nr_bandtable[ind].ul_min - nr_bandtable[ind].dl_min)*1000;
          center_freq_diff_khz = abs(dl_freq_khz - center_frequency_khz);

	        if (*current_offset == 0)
	          *current_type = TDD;
	        else
	          *current_type = FDD;
        }
      }
    }

    LOG_I( PHY, "DL frequency %"PRIu32": band %d, frame_type %d, UL frequency %"PRIu32"\n",
         downlink_frequency, *current_band, *current_type, downlink_frequency+*current_offset);

    AssertFatal(*current_band != 0,
	    "Can't find EUTRA band for frequency %u\n", downlink_frequency);
}

uint32_t to_nrarfcn(int nr_bandP,
                    uint64_t dl_CarrierFreq,
                    uint32_t bw)
{
  uint64_t dl_CarrierFreq_by_1k = dl_CarrierFreq / 1000;
  int bw_kHz = bw / 1000;

  int i;

  LOG_I(MAC,"Searching for nr band %d DL Carrier frequency %llu bw %u\n",nr_bandP,(long long unsigned int)dl_CarrierFreq,bw);
  AssertFatal(nr_bandP < 86, "nr_band %d > 86\n", nr_bandP);
  for (i = 0; i < 30 && nr_bandtable[i].band != nr_bandP; i++);

  AssertFatal(dl_CarrierFreq_by_1k >= nr_bandtable[i].dl_min,
        "Band %d, bw %u : DL carrier frequency %llu kHz < %llu\n",
	      nr_bandP, bw, (long long unsigned int)dl_CarrierFreq_by_1k,
	      (long long unsigned int)nr_bandtable[i].dl_min);
  AssertFatal(dl_CarrierFreq_by_1k <= (nr_bandtable[i].dl_max - bw_kHz),
        "Band %d, dl_CarrierFreq %llu bw %u: DL carrier frequency %llu kHz > %llu\n",
	      nr_bandP, (long long unsigned int)dl_CarrierFreq,bw, (long long unsigned int)dl_CarrierFreq_by_1k,
	      (long long unsigned int)(nr_bandtable[i].dl_max - bw_kHz));
 
  int deltaFglobal;

  if (dl_CarrierFreq < 3e9) deltaFglobal = 5;
  else                      deltaFglobal = 15;

  // This is equation before Table 5.4.2.1-1 in 38101-1-f30
  // F_REF=F_REF_Offs + deltaF_Global(N_REF-NREF_REF_Offs)
  return (((dl_CarrierFreq_by_1k - nr_bandtable[i].dl_min)/deltaFglobal) +
	  nr_bandtable[i].N_OFFs_DL);
}


uint64_t from_nrarfcn(int nr_bandP,
                      uint32_t dl_nrarfcn)
{
  int i;
  int deltaFglobal;

  if (nr_bandP < 77 || nr_bandP > 79) deltaFglobal = 5;
  else                                deltaFglobal = 15;
  
  AssertFatal(nr_bandP < 87, "nr_band %d > 86\n", nr_bandP);
  for (i = 0; i < 31 && nr_bandtable[i].band != nr_bandP; i++);
  AssertFatal(dl_nrarfcn>=nr_bandtable[i].N_OFFs_DL,"dl_nrarfcn %u < N_OFFs_DL %llu\n",dl_nrarfcn, (long long unsigned int)nr_bandtable[i].N_OFFs_DL);
 
  LOG_I(PHY,"Computing dl_frequency (pointA %llu => %llu (dlmin %llu, nr_bandtable[%d].N_OFFs_DL %llu))\n",
	(unsigned long long)dl_nrarfcn,
	(unsigned long long)(1000*(nr_bandtable[i].dl_min + (dl_nrarfcn - nr_bandtable[i].N_OFFs_DL) * deltaFglobal)),
	(unsigned long long)nr_bandtable[i].dl_min,
	i,
	(unsigned long long)nr_bandtable[i].N_OFFs_DL); 
  return 1000*(nr_bandtable[i].dl_min + (dl_nrarfcn - nr_bandtable[i].N_OFFs_DL) * deltaFglobal);
}


int32_t get_nr_uldl_offset(int nr_bandP)
{
  int i;

  for (i = 0; i < NR_BANDTABLE_SIZE && nr_bandtable[i].band != nr_bandP; i++);

  AssertFatal(i < NR_BANDTABLE_SIZE, "i %d >= BANDTABLE_SIZE %ld\n", i, NR_BANDTABLE_SIZE);

  return (nr_bandtable[i].dl_min - nr_bandtable[i].ul_min);
}


void nr_get_tbs_dl(nfapi_nr_dl_config_dlsch_pdu *dlsch_pdu,
                   nfapi_nr_dl_config_dci_dl_pdu dci_pdu,
		   int x_overhead) {

  LOG_D(MAC, "TBS calculation\n");

  nfapi_nr_dl_config_pdcch_parameters_rel15_t params_rel15 = dci_pdu.pdcch_params_rel15;
  nfapi_nr_dl_config_dlsch_pdu_rel15_t *dlsch_rel15 = &dlsch_pdu->dlsch_pdu_rel15;
  uint8_t rnti_type = params_rel15.rnti_type;
  uint16_t N_PRB_oh = ((rnti_type==NFAPI_NR_RNTI_SI)||(rnti_type==NFAPI_NR_RNTI_RA)||(rnti_type==NFAPI_NR_RNTI_P))? 0 : \
  (x_overhead);
  uint8_t N_PRB_DMRS = (dlsch_rel15->dmrsConfigType == NFAPI_NR_DMRS_TYPE1)?6:4; //This only works for antenna port 1000
  uint8_t N_sh_symb = dlsch_rel15->NrOfSymbols;
  uint8_t Imcs = dlsch_rel15->mcsIndex[0];
  uint16_t N_RE_prime = NR_NB_SC_PER_RB*N_sh_symb - N_PRB_DMRS - N_PRB_oh;
  LOG_D(MAC, "N_RE_prime %d for %d symbols %d DMRS per PRB and %d overhead\n", N_RE_prime, N_sh_symb, N_PRB_DMRS, N_PRB_oh);

  uint16_t R;
  uint32_t TBS=0;
  uint8_t table_idx, Qm;

  /*uint8_t mcs_table = config.pdsch_config.mcs_table.value;
  uint8_t ss_type = params_rel15.search_space_type;
  uint8_t dci_format = params_rel15.dci_format;
  get_table_idx(mcs_table, dci_format, rnti_type, ss_type);*/
  table_idx = 0;
  R = nr_get_code_rate_dl(Imcs, table_idx);
  Qm = nr_get_Qm_dl(Imcs, table_idx);

  TBS = nr_compute_tbs(Qm,
                       R,
		       dlsch_rel15->rbSize,
		       N_sh_symb,
		       N_PRB_DMRS,
		       N_PRB_oh,
		       dlsch_rel15->nrOfLayers);

  dlsch_rel15->targetCodeRate[0] = R;
  dlsch_rel15->qamModOrder[0] = Qm;
  dlsch_rel15->TBSize[0] = TBS;
  //  dlsch_rel15->nb_mod_symbols = N_RE_prime*dlsch_rel15->n_prb*dlsch_rel15->nb_codewords;
  dlsch_rel15->mcsTable[0] = table_idx;

  LOG_D(MAC, "TBS %d : N_PRB_DMRS %d N_sh_symb %d N_PRB_oh %d R %d Qm %d table %d nb_symbols %d\n",
  TBS, N_PRB_DMRS, N_sh_symb, N_PRB_oh, R, Qm, table_idx,N_RE_prime*dlsch_rel15->rbSize*dlsch_rel15->NrOfCodewords );
}

//Table 5.1.3.1-1 of 38.214
uint16_t Table_51311[29][2] = {{2,120},{2,157},{2,193},{2,251},{2,308},{2,379},{2,449},{2,526},{2,602},{2,679},{4,340},{4,378},{4,434},{4,490},{4,553},{4,616},
		{4,658},{6,438},{6,466},{6,517},{6,567},{6,616},{6,666},{6,719},{6,772},{6,822},{6,873}, {6,910}, {6,948}};

//Table 5.1.3.1-2 of 38.214
// Imcs values 20 and 26 have been multiplied by 2 to avoid the floating point
uint16_t Table_51312[28][2] = {{2,120},{2,193},{2,308},{2,449},{2,602},{4,378},{4,434},{4,490},{4,553},{4,616},{4,658},{6,466},{6,517},{6,567},{6,616},{6,666},
		{6,719},{6,772},{6,822},{6,873},{8,1365},{8,711},{8,754},{8,797},{8,841},{8,885},{8,1833},{8,948}};

//Table 5.1.3.1-3 of 38.214
uint16_t Table_51313[29][2] = {{2,30},{2,40},{2,50},{2,64},{2,78},{2,99},{2,120},{2,157},{2,193},{2,251},{2,308},{2,379},{2,449},{2,526},{2,602},{4,340},
		{4,378},{4,434},{4,490},{4,553},{4,616},{6,438},{6,466},{6,517},{6,567},{6,616},{6,666}, {6,719}, {6,772}};

//Table 6.1.4.1-1 of 38.214 TODO fix for tp-pi2BPSK
uint16_t Table_61411[28][2] = {{2,120},{2,157},{2,193},{2,251},{2,308},{2,379},{2,449},{2,526},{2,602},{2,679},{4,340},{4,378},{4,434},{4,490},{4,553},{4,616},
		{4,658},{6,466},{6,517},{6,567},{6,616},{6,666},{6,719},{6,772},{6,822},{6,873}, {6,910}, {6,948}};

//Table 6.1.4.1-2 of 38.214 TODO fix for tp-pi2BPSK
uint16_t Table_61412[28][2] = {{2,30},{2,40},{2,50},{2,64},{2,78},{2,99},{2,120},{2,157},{2,193},{2,251},{2,308},{2,379},{2,449},{2,526},{2,602},{2,679},
		{4,378},{4,434},{4,490},{4,553},{4,616},{4,658},{4,699},{4,772},{6,567},{6,616},{6,666}, {6,772}};



uint8_t nr_get_Qm_dl(uint8_t Imcs, uint8_t table_idx) {
  switch(table_idx) {
    case 0:
      return (Table_51311[Imcs][0]);
    break;

    case 1:
      return (Table_51312[Imcs][0]);
    break;

    case 2:
      return (Table_51313[Imcs][0]);
    break;

    default:
      AssertFatal(0, "Invalid MCS table index %d (expected in range [1,3])\n", table_idx);
  }
}

uint32_t nr_get_code_rate_dl(uint8_t Imcs, uint8_t table_idx) {
  switch(table_idx) {
    case 0:
      return (Table_51311[Imcs][1]);
    break;

    case 1:
      return (Table_51312[Imcs][1]);
    break;

    case 2:
      return (Table_51313[Imcs][1]);
    break;

    default:
      AssertFatal(0, "Invalid MCS table index %d (expected in range [1,3])\n", table_idx);
  }
}

uint8_t nr_get_Qm_ul(uint8_t Imcs, uint8_t table_idx) {
  switch(table_idx) {
    case 0:
      return (Table_51311[Imcs][0]);
    break;

    case 1:
      return (Table_51312[Imcs][0]);
    break;

    case 2:
      return (Table_51313[Imcs][0]);
    break;

    case 3:
      return (Table_61411[Imcs][0]);
    break;

    case 4:
      return (Table_61412[Imcs][0]);
    break;

    default:
      AssertFatal(0, "Invalid MCS table index %d (expected in range [1,2])\n", table_idx);
  }
}

uint32_t nr_get_code_rate_ul(uint8_t Imcs, uint8_t table_idx) {
  switch(table_idx) {
    case 0:
      return (Table_51311[Imcs][1]);
    break;

    case 1:
      return (Table_51312[Imcs][1]);
    break;

    case 2:
      return (Table_51313[Imcs][1]);
    break;

    case 3:
      return (Table_61411[Imcs][1]);
    break;

    case 4:
      return (Table_61412[Imcs][1]);
    break;

    default:
      AssertFatal(0, "Invalid MCS table index %d (expected in range [1,2])\n", table_idx);
  }
}

static inline uint8_t is_codeword_disabled(uint8_t format, uint8_t Imcs, uint8_t rv) {
  return ((format==NFAPI_NR_DL_DCI_FORMAT_1_1)&&(Imcs==26)&&(rv==1));
}

static inline uint8_t get_table_idx(uint8_t mcs_table, uint8_t dci_format, uint8_t rnti_type, uint8_t ss_type) {
  if ((mcs_table == NFAPI_NR_MCS_TABLE_QAM256) && (dci_format == NFAPI_NR_DL_DCI_FORMAT_1_1) && ((rnti_type==NFAPI_NR_RNTI_C)||(rnti_type==NFAPI_NR_RNTI_CS)))
    return 2;
  else if ((mcs_table == NFAPI_NR_MCS_TABLE_QAM64_LOW_SE) && (rnti_type!=NFAPI_NR_RNTI_new) && (rnti_type==NFAPI_NR_RNTI_C) && (ss_type==NFAPI_NR_SEARCH_SPACE_TYPE_UE_SPECIFIC))
    return 3;
  else if (rnti_type==NFAPI_NR_RNTI_new)
    return 3;
  else if ((mcs_table == NFAPI_NR_MCS_TABLE_QAM256) && (rnti_type==NFAPI_NR_RNTI_CS) && (dci_format == NFAPI_NR_DL_DCI_FORMAT_1_1))
    return 2; // Condition mcs_table not configured in sps_config necessary here but not yet implemented
  /*else if((mcs_table == NFAPI_NR_MCS_TABLE_QAM64_LOW_SE) &&  (rnti_type==NFAPI_NR_RNTI_CS))
   *  table_idx = 3;
   * Note: the commented block refers to the case where the mcs_table is from sps_config*/
  else
    return 1;
}

int get_num_dmrs(uint16_t dmrs_mask ) {

  int num_dmrs;

  for (int i=0;i<16;i++) num_dmrs+=((dmrs_mask>>i)&1);
  return(num_dmrs);
}

