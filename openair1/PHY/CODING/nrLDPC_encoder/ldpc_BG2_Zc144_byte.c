#include "PHY/sse_intrin.h"
// generated code for Zc=144, byte encoding
static inline void ldpc_BG2_Zc144_byte(uint8_t *c,uint8_t *d) {
  __m128i *csimd=(__m128i *)c,*dsimd=(__m128i *)d;

  __m128i *c2,*d2;

  int i2;
  for (i2=0; i2<9; i2++) {
     c2=&csimd[i2];
     d2=&dsimd[i2];

//row: 0
     d2[0]=_mm_xor_si128(c2[360],_mm_xor_si128(c2[361],_mm_xor_si128(c2[2525],_mm_xor_si128(c2[1639],_mm_xor_si128(c2[1644],_mm_xor_si128(c2[1285],_mm_xor_si128(c2[759],_mm_xor_si128(c2[1483],_mm_xor_si128(c2[416],_mm_xor_si128(c2[2399],_mm_xor_si128(c2[2039],_mm_xor_si128(c2[1338],_mm_xor_si128(c2[2418],_mm_xor_si128(c2[973],_mm_xor_si128(c2[274],_mm_xor_si128(c2[630],_mm_xor_si128(c2[475],_mm_xor_si128(c2[653],_mm_xor_si128(c2[1552],_mm_xor_si128(c2[312],_mm_xor_si128(c2[129],_mm_xor_si128(c2[868],_mm_xor_si128(c2[2670],_mm_xor_si128(c2[2851],_mm_xor_si128(c2[2689],_mm_xor_si128(c2[345],c2[2686]))))))))))))))))))))))))));

//row: 1
     d2[9]=_mm_xor_si128(c2[540],_mm_xor_si128(c2[360],_mm_xor_si128(c2[361],_mm_xor_si128(c2[2525],_mm_xor_si128(c2[1819],_mm_xor_si128(c2[1639],_mm_xor_si128(c2[1644],_mm_xor_si128(c2[1285],_mm_xor_si128(c2[939],_mm_xor_si128(c2[759],_mm_xor_si128(c2[1483],_mm_xor_si128(c2[596],_mm_xor_si128(c2[416],_mm_xor_si128(c2[2399],_mm_xor_si128(c2[2039],_mm_xor_si128(c2[1338],_mm_xor_si128(c2[2418],_mm_xor_si128(c2[973],_mm_xor_si128(c2[274],_mm_xor_si128(c2[630],_mm_xor_si128(c2[655],_mm_xor_si128(c2[475],_mm_xor_si128(c2[653],_mm_xor_si128(c2[1552],_mm_xor_si128(c2[312],_mm_xor_si128(c2[129],_mm_xor_si128(c2[868],_mm_xor_si128(c2[2670],_mm_xor_si128(c2[2851],_mm_xor_si128(c2[2869],_mm_xor_si128(c2[2689],_mm_xor_si128(c2[345],c2[2686]))))))))))))))))))))))))))))))));

//row: 2
     d2[18]=_mm_xor_si128(c2[540],_mm_xor_si128(c2[360],_mm_xor_si128(c2[541],_mm_xor_si128(c2[361],_mm_xor_si128(c2[2525],_mm_xor_si128(c2[1819],_mm_xor_si128(c2[1639],_mm_xor_si128(c2[1644],_mm_xor_si128(c2[1285],_mm_xor_si128(c2[939],_mm_xor_si128(c2[759],_mm_xor_si128(c2[1483],_mm_xor_si128(c2[596],_mm_xor_si128(c2[416],_mm_xor_si128(c2[2579],_mm_xor_si128(c2[2399],_mm_xor_si128(c2[2039],_mm_xor_si128(c2[1518],_mm_xor_si128(c2[1338],_mm_xor_si128(c2[2418],_mm_xor_si128(c2[973],_mm_xor_si128(c2[454],_mm_xor_si128(c2[274],_mm_xor_si128(c2[630],_mm_xor_si128(c2[655],_mm_xor_si128(c2[475],_mm_xor_si128(c2[833],_mm_xor_si128(c2[653],_mm_xor_si128(c2[1552],_mm_xor_si128(c2[492],_mm_xor_si128(c2[312],_mm_xor_si128(c2[129],_mm_xor_si128(c2[1048],_mm_xor_si128(c2[868],_mm_xor_si128(c2[2670],_mm_xor_si128(c2[2851],_mm_xor_si128(c2[2869],_mm_xor_si128(c2[2689],_mm_xor_si128(c2[525],_mm_xor_si128(c2[345],c2[2686]))))))))))))))))))))))))))))))))))))))));

//row: 3
     d2[27]=_mm_xor_si128(c2[360],_mm_xor_si128(c2[361],_mm_xor_si128(c2[2525],_mm_xor_si128(c2[1639],_mm_xor_si128(c2[1644],_mm_xor_si128(c2[1465],_mm_xor_si128(c2[1285],_mm_xor_si128(c2[759],_mm_xor_si128(c2[1663],_mm_xor_si128(c2[1483],_mm_xor_si128(c2[416],_mm_xor_si128(c2[2399],_mm_xor_si128(c2[2039],_mm_xor_si128(c2[1338],_mm_xor_si128(c2[2418],_mm_xor_si128(c2[1153],_mm_xor_si128(c2[973],_mm_xor_si128(c2[274],_mm_xor_si128(c2[810],_mm_xor_si128(c2[630],_mm_xor_si128(c2[475],_mm_xor_si128(c2[653],_mm_xor_si128(c2[1732],_mm_xor_si128(c2[1552],_mm_xor_si128(c2[312],_mm_xor_si128(c2[309],_mm_xor_si128(c2[129],_mm_xor_si128(c2[868],_mm_xor_si128(c2[2670],_mm_xor_si128(c2[152],_mm_xor_si128(c2[2851],_mm_xor_si128(c2[2689],_mm_xor_si128(c2[345],_mm_xor_si128(c2[2866],c2[2686]))))))))))))))))))))))))))))))))));

//row: 4
     d2[36]=_mm_xor_si128(c2[1083],_mm_xor_si128(c2[903],_mm_xor_si128(c2[904],_mm_xor_si128(c2[180],_mm_xor_si128(c2[1802],_mm_xor_si128(c2[2362],_mm_xor_si128(c2[2182],_mm_xor_si128(c2[2178],_mm_xor_si128(c2[1819],_mm_xor_si128(c2[1459],_mm_xor_si128(c2[1482],_mm_xor_si128(c2[1302],_mm_xor_si128(c2[2017],_mm_xor_si128(c2[1139],_mm_xor_si128(c2[959],_mm_xor_si128(c2[54],_mm_xor_si128(c2[2582],_mm_xor_si128(c2[1872],_mm_xor_si128(c2[73],_mm_xor_si128(c2[1516],_mm_xor_si128(c2[817],_mm_xor_si128(c2[1173],_mm_xor_si128(c2[1189],_mm_xor_si128(c2[1009],_mm_xor_si128(c2[1196],_mm_xor_si128(c2[2095],_mm_xor_si128(c2[846],_mm_xor_si128(c2[672],_mm_xor_si128(c2[1411],_mm_xor_si128(c2[325],_mm_xor_si128(c2[506],_mm_xor_si128(c2[524],_mm_xor_si128(c2[344],_mm_xor_si128(c2[888],c2[350]))))))))))))))))))))))))))))))))));

//row: 5
     d2[45]=_mm_xor_si128(c2[1804],_mm_xor_si128(c2[1624],_mm_xor_si128(c2[1625],_mm_xor_si128(c2[901],_mm_xor_si128(c2[1442],_mm_xor_si128(c2[204],_mm_xor_si128(c2[24],_mm_xor_si128(c2[20],_mm_xor_si128(c2[2540],_mm_xor_si128(c2[2186],_mm_xor_si128(c2[2203],_mm_xor_si128(c2[2023],_mm_xor_si128(c2[2738],_mm_xor_si128(c2[1860],_mm_xor_si128(c2[1680],_mm_xor_si128(c2[775],_mm_xor_si128(c2[415],_mm_xor_si128(c2[2593],_mm_xor_si128(c2[794],_mm_xor_si128(c2[2237],_mm_xor_si128(c2[1538],_mm_xor_si128(c2[1894],_mm_xor_si128(c2[815],_mm_xor_si128(c2[1910],_mm_xor_si128(c2[1730],_mm_xor_si128(c2[1908],_mm_xor_si128(c2[2816],_mm_xor_si128(c2[1567],_mm_xor_si128(c2[1393],_mm_xor_si128(c2[1754],_mm_xor_si128(c2[2132],_mm_xor_si128(c2[1046],_mm_xor_si128(c2[1227],_mm_xor_si128(c2[1245],_mm_xor_si128(c2[1065],_mm_xor_si128(c2[1609],c2[1062]))))))))))))))))))))))))))))))))))));

//row: 6
     d2[54]=_mm_xor_si128(c2[2528],_mm_xor_si128(c2[2348],_mm_xor_si128(c2[2340],_mm_xor_si128(c2[1625],_mm_xor_si128(c2[2346],_mm_xor_si128(c2[919],_mm_xor_si128(c2[739],_mm_xor_si128(c2[744],_mm_xor_si128(c2[385],_mm_xor_si128(c2[39],_mm_xor_si128(c2[2738],_mm_xor_si128(c2[583],_mm_xor_si128(c2[2575],_mm_xor_si128(c2[2395],_mm_xor_si128(c2[1499],_mm_xor_si128(c2[1139],_mm_xor_si128(c2[438],_mm_xor_si128(c2[1518],_mm_xor_si128(c2[73],_mm_xor_si128(c2[2253],_mm_xor_si128(c2[2618],_mm_xor_si128(c2[1355],_mm_xor_si128(c2[2634],_mm_xor_si128(c2[2454],_mm_xor_si128(c2[2632],_mm_xor_si128(c2[652],_mm_xor_si128(c2[2291],_mm_xor_si128(c2[2108],_mm_xor_si128(c2[2112],_mm_xor_si128(c2[2847],_mm_xor_si128(c2[1770],_mm_xor_si128(c2[1951],_mm_xor_si128(c2[1969],_mm_xor_si128(c2[1789],_mm_xor_si128(c2[2324],_mm_xor_si128(c2[1786],c2[1070]))))))))))))))))))))))))))))))))))));

//row: 7
     d2[63]=_mm_xor_si128(c2[2706],_mm_xor_si128(c2[2526],_mm_xor_si128(c2[544],_mm_xor_si128(c2[2527],_mm_xor_si128(c2[545],_mm_xor_si128(c2[1803],_mm_xor_si128(c2[2700],_mm_xor_si128(c2[1106],_mm_xor_si128(c2[926],_mm_xor_si128(c2[1823],_mm_xor_si128(c2[922],_mm_xor_si128(c2[1819],_mm_xor_si128(c2[563],_mm_xor_si128(c2[1640],_mm_xor_si128(c2[1460],_mm_xor_si128(c2[204],_mm_xor_si128(c2[217],_mm_xor_si128(c2[37],_mm_xor_si128(c2[943],_mm_xor_si128(c2[761],_mm_xor_si128(c2[1838],_mm_xor_si128(c2[1658],_mm_xor_si128(c2[2762],_mm_xor_si128(c2[2582],_mm_xor_si128(c2[600],_mm_xor_si128(c2[1677],_mm_xor_si128(c2[2574],_mm_xor_si128(c2[1317],_mm_xor_si128(c2[2214],_mm_xor_si128(c2[616],_mm_xor_si128(c2[1513],_mm_xor_si128(c2[1696],_mm_xor_si128(c2[2593],_mm_xor_si128(c2[260],_mm_xor_si128(c2[1337],_mm_xor_si128(c2[1157],_mm_xor_si128(c2[2431],_mm_xor_si128(c2[458],_mm_xor_si128(c2[2796],_mm_xor_si128(c2[994],_mm_xor_si128(c2[814],_mm_xor_si128(c2[1358],_mm_xor_si128(c2[2812],_mm_xor_si128(c2[2632],_mm_xor_si128(c2[650],_mm_xor_si128(c2[2810],_mm_xor_si128(c2[828],_mm_xor_si128(c2[830],_mm_xor_si128(c2[1916],_mm_xor_si128(c2[1736],_mm_xor_si128(c2[2469],_mm_xor_si128(c2[487],_mm_xor_si128(c2[2286],_mm_xor_si128(c2[493],_mm_xor_si128(c2[313],_mm_xor_si128(c2[668],_mm_xor_si128(c2[146],_mm_xor_si128(c2[1052],_mm_xor_si128(c2[1948],_mm_xor_si128(c2[2845],_mm_xor_si128(c2[2129],_mm_xor_si128(c2[327],_mm_xor_si128(c2[147],_mm_xor_si128(c2[2147],_mm_xor_si128(c2[1967],_mm_xor_si128(c2[2864],_mm_xor_si128(c2[2502],_mm_xor_si128(c2[529],_mm_xor_si128(c2[1964],_mm_xor_si128(c2[162],c2[2870]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 8
     d2[72]=_mm_xor_si128(c2[1985],_mm_xor_si128(c2[1805],_mm_xor_si128(c2[1986],_mm_xor_si128(c2[1806],_mm_xor_si128(c2[1082],_mm_xor_si128(c2[1084],_mm_xor_si128(c2[385],_mm_xor_si128(c2[205],_mm_xor_si128(c2[201],_mm_xor_si128(c2[2721],_mm_xor_si128(c2[922],_mm_xor_si128(c2[2384],_mm_xor_si128(c2[2204],_mm_xor_si128(c2[40],_mm_xor_si128(c2[2041],_mm_xor_si128(c2[1861],_mm_xor_si128(c2[1136],_mm_xor_si128(c2[956],_mm_xor_si128(c2[596],_mm_xor_si128(c2[75],_mm_xor_si128(c2[2774],_mm_xor_si128(c2[975],_mm_xor_si128(c2[2418],_mm_xor_si128(c2[1890],_mm_xor_si128(c2[1710],_mm_xor_si128(c2[2075],_mm_xor_si128(c2[2091],_mm_xor_si128(c2[1911],_mm_xor_si128(c2[2269],_mm_xor_si128(c2[2089],_mm_xor_si128(c2[109],_mm_xor_si128(c2[1928],_mm_xor_si128(c2[1748],_mm_xor_si128(c2[1574],_mm_xor_si128(c2[2484],_mm_xor_si128(c2[2304],_mm_xor_si128(c2[1227],_mm_xor_si128(c2[1408],_mm_xor_si128(c2[1426],_mm_xor_si128(c2[1246],_mm_xor_si128(c2[1970],_mm_xor_si128(c2[1790],c2[1243]))))))))))))))))))))))))))))))))))))))))));

//row: 9
     d2[81]=_mm_xor_si128(c2[1801],_mm_xor_si128(c2[723],_mm_xor_si128(c2[543],_mm_xor_si128(c2[1802],_mm_xor_si128(c2[544],_mm_xor_si128(c2[1087],_mm_xor_si128(c2[2708],_mm_xor_si128(c2[201],_mm_xor_si128(c2[2002],_mm_xor_si128(c2[1822],_mm_xor_si128(c2[206],_mm_xor_si128(c2[1818],_mm_xor_si128(c2[2726],_mm_xor_si128(c2[1459],_mm_xor_si128(c2[204],_mm_xor_si128(c2[2200],_mm_xor_si128(c2[1122],_mm_xor_si128(c2[942],_mm_xor_si128(c2[36],_mm_xor_si128(c2[1657],_mm_xor_si128(c2[1857],_mm_xor_si128(c2[779],_mm_xor_si128(c2[599],_mm_xor_si128(c2[961],_mm_xor_si128(c2[2582],_mm_xor_si128(c2[601],_mm_xor_si128(c2[2222],_mm_xor_si128(c2[2779],_mm_xor_si128(c2[1512],_mm_xor_si128(c2[980],_mm_xor_si128(c2[2592],_mm_xor_si128(c2[2414],_mm_xor_si128(c2[1156],_mm_xor_si128(c2[1715],_mm_xor_si128(c2[457],_mm_xor_si128(c2[2071],_mm_xor_si128(c2[813],_mm_xor_si128(c2[1916],_mm_xor_si128(c2[829],_mm_xor_si128(c2[649],_mm_xor_si128(c2[2094],_mm_xor_si128(c2[836],_mm_xor_si128(c2[114],_mm_xor_si128(c2[1735],_mm_xor_si128(c2[1753],_mm_xor_si128(c2[486],_mm_xor_si128(c2[1570],_mm_xor_si128(c2[312],_mm_xor_si128(c2[2309],_mm_xor_si128(c2[1051],_mm_xor_si128(c2[1232],_mm_xor_si128(c2[2844],_mm_xor_si128(c2[1404],_mm_xor_si128(c2[146],_mm_xor_si128(c2[1586],_mm_xor_si128(c2[1242],_mm_xor_si128(c2[164],_mm_xor_si128(c2[2863],_mm_xor_si128(c2[1786],_mm_xor_si128(c2[528],_mm_xor_si128(c2[1248],c2[2869])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 10
     d2[90]=_mm_xor_si128(c2[2522],_mm_xor_si128(c2[1640],_mm_xor_si128(c2[1014],c2[132])));

//row: 11
     d2[99]=_mm_xor_si128(c2[364],_mm_xor_si128(c2[365],_mm_xor_si128(c2[2520],_mm_xor_si128(c2[2161],_mm_xor_si128(c2[1643],_mm_xor_si128(c2[1639],_mm_xor_si128(c2[1460],_mm_xor_si128(c2[1280],_mm_xor_si128(c2[763],_mm_xor_si128(c2[1658],_mm_xor_si128(c2[1478],_mm_xor_si128(c2[420],_mm_xor_si128(c2[2394],_mm_xor_si128(c2[2034],_mm_xor_si128(c2[1333],_mm_xor_si128(c2[2413],_mm_xor_si128(c2[1157],_mm_xor_si128(c2[977],_mm_xor_si128(c2[278],_mm_xor_si128(c2[814],_mm_xor_si128(c2[634],_mm_xor_si128(c2[470],_mm_xor_si128(c2[648],_mm_xor_si128(c2[1736],_mm_xor_si128(c2[1556],_mm_xor_si128(c2[307],_mm_xor_si128(c2[313],_mm_xor_si128(c2[133],_mm_xor_si128(c2[2647],_mm_xor_si128(c2[872],_mm_xor_si128(c2[2665],_mm_xor_si128(c2[147],_mm_xor_si128(c2[2846],_mm_xor_si128(c2[2684],_mm_xor_si128(c2[349],_mm_xor_si128(c2[2870],_mm_xor_si128(c2[2690],c2[889])))))))))))))))))))))))))))))))))))));

//row: 12
     d2[108]=_mm_xor_si128(c2[1088],_mm_xor_si128(c2[908],_mm_xor_si128(c2[900],_mm_xor_si128(c2[185],_mm_xor_si128(c2[2358],_mm_xor_si128(c2[2178],_mm_xor_si128(c2[2183],_mm_xor_si128(c2[1824],_mm_xor_si128(c2[200],_mm_xor_si128(c2[1478],_mm_xor_si128(c2[1298],_mm_xor_si128(c2[2022],_mm_xor_si128(c2[1135],_mm_xor_si128(c2[955],_mm_xor_si128(c2[59],_mm_xor_si128(c2[2578],_mm_xor_si128(c2[1861],_mm_xor_si128(c2[1877],_mm_xor_si128(c2[78],_mm_xor_si128(c2[1512],_mm_xor_si128(c2[813],_mm_xor_si128(c2[1178],_mm_xor_si128(c2[1194],_mm_xor_si128(c2[1014],_mm_xor_si128(c2[1192],_mm_xor_si128(c2[2091],_mm_xor_si128(c2[851],_mm_xor_si128(c2[668],_mm_xor_si128(c2[1407],_mm_xor_si128(c2[330],_mm_xor_si128(c2[511],_mm_xor_si128(c2[529],_mm_xor_si128(c2[349],_mm_xor_si128(c2[884],c2[346]))))))))))))))))))))))))))))))))));

//row: 13
     d2[117]=_mm_xor_si128(c2[183],_mm_xor_si128(c2[184],_mm_xor_si128(c2[2348],_mm_xor_si128(c2[2164],_mm_xor_si128(c2[1462],_mm_xor_si128(c2[1458],_mm_xor_si128(c2[1279],_mm_xor_si128(c2[1099],_mm_xor_si128(c2[920],_mm_xor_si128(c2[582],_mm_xor_si128(c2[1477],_mm_xor_si128(c2[1297],_mm_xor_si128(c2[239],_mm_xor_si128(c2[2222],_mm_xor_si128(c2[1862],_mm_xor_si128(c2[1152],_mm_xor_si128(c2[2232],_mm_xor_si128(c2[976],_mm_xor_si128(c2[796],_mm_xor_si128(c2[97],_mm_xor_si128(c2[633],_mm_xor_si128(c2[453],_mm_xor_si128(c2[289],_mm_xor_si128(c2[476],_mm_xor_si128(c2[1555],_mm_xor_si128(c2[1375],_mm_xor_si128(c2[126],_mm_xor_si128(c2[132],_mm_xor_si128(c2[2831],_mm_xor_si128(c2[691],_mm_xor_si128(c2[2484],_mm_xor_si128(c2[2845],_mm_xor_si128(c2[2665],_mm_xor_si128(c2[2667],_mm_xor_si128(c2[2503],_mm_xor_si128(c2[168],_mm_xor_si128(c2[2689],c2[2509])))))))))))))))))))))))))))))))))))));

//row: 14
     d2[126]=_mm_xor_si128(c2[908],_mm_xor_si128(c2[728],_mm_xor_si128(c2[546],_mm_xor_si128(c2[720],_mm_xor_si128(c2[547],_mm_xor_si128(c2[5],_mm_xor_si128(c2[2702],_mm_xor_si128(c2[2178],_mm_xor_si128(c2[1998],_mm_xor_si128(c2[1825],_mm_xor_si128(c2[2003],_mm_xor_si128(c2[1821],_mm_xor_si128(c2[1644],_mm_xor_si128(c2[1642],_mm_xor_si128(c2[1462],_mm_xor_si128(c2[2726],_mm_xor_si128(c2[1298],_mm_xor_si128(c2[1118],_mm_xor_si128(c2[936],_mm_xor_si128(c2[1842],_mm_xor_si128(c2[1840],_mm_xor_si128(c2[1660],_mm_xor_si128(c2[955],_mm_xor_si128(c2[775],_mm_xor_si128(c2[602],_mm_xor_si128(c2[2758],_mm_xor_si128(c2[2576],_mm_xor_si128(c2[2398],_mm_xor_si128(c2[2216],_mm_xor_si128(c2[1697],_mm_xor_si128(c2[1515],_mm_xor_si128(c2[2777],_mm_xor_si128(c2[2595],_mm_xor_si128(c2[1332],_mm_xor_si128(c2[1339],_mm_xor_si128(c2[1159],_mm_xor_si128(c2[633],_mm_xor_si128(c2[451],_mm_xor_si128(c2[998],_mm_xor_si128(c2[996],_mm_xor_si128(c2[816],_mm_xor_si128(c2[1014],_mm_xor_si128(c2[834],_mm_xor_si128(c2[652],_mm_xor_si128(c2[1012],_mm_xor_si128(c2[830],_mm_xor_si128(c2[1911],_mm_xor_si128(c2[1909],_mm_xor_si128(c2[1729],_mm_xor_si128(c2[651],_mm_xor_si128(c2[671],_mm_xor_si128(c2[489],_mm_xor_si128(c2[488],_mm_xor_si128(c2[486],_mm_xor_si128(c2[306],_mm_xor_si128(c2[1227],_mm_xor_si128(c2[1045],_mm_xor_si128(c2[150],_mm_xor_si128(c2[2847],_mm_xor_si128(c2[331],_mm_xor_si128(c2[329],_mm_xor_si128(c2[149],_mm_xor_si128(c2[349],_mm_xor_si128(c2[169],_mm_xor_si128(c2[2866],_mm_xor_si128(c2[704],_mm_xor_si128(c2[522],_mm_xor_si128(c2[166],_mm_xor_si128(c2[164],c2[2863])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 15
     d2[135]=_mm_xor_si128(c2[366],_mm_xor_si128(c2[548],_mm_xor_si128(c2[368],_mm_xor_si128(c2[367],_mm_xor_si128(c2[360],_mm_xor_si128(c2[2522],_mm_xor_si128(c2[2524],_mm_xor_si128(c2[1988],_mm_xor_si128(c2[1645],_mm_xor_si128(c2[1818],_mm_xor_si128(c2[1638],_mm_xor_si128(c2[1641],_mm_xor_si128(c2[1643],_mm_xor_si128(c2[1282],_mm_xor_si128(c2[1284],_mm_xor_si128(c2[756],_mm_xor_si128(c2[938],_mm_xor_si128(c2[758],_mm_xor_si128(c2[1480],_mm_xor_si128(c2[1482],_mm_xor_si128(c2[422],_mm_xor_si128(c2[595],_mm_xor_si128(c2[415],_mm_xor_si128(c2[2396],_mm_xor_si128(c2[2398],_mm_xor_si128(c2[2036],_mm_xor_si128(c2[2038],_mm_xor_si128(c2[1335],_mm_xor_si128(c2[1337],_mm_xor_si128(c2[2415],_mm_xor_si128(c2[2417],_mm_xor_si128(c2[979],_mm_xor_si128(c2[972],_mm_xor_si128(c2[271],_mm_xor_si128(c2[273],_mm_xor_si128(c2[636],_mm_xor_si128(c2[638],_mm_xor_si128(c2[472],_mm_xor_si128(c2[654],_mm_xor_si128(c2[474],_mm_xor_si128(c2[650],_mm_xor_si128(c2[652],_mm_xor_si128(c2[1549],_mm_xor_si128(c2[1551],_mm_xor_si128(c2[309],_mm_xor_si128(c2[311],_mm_xor_si128(c2[126],_mm_xor_si128(c2[128],_mm_xor_si128(c2[865],_mm_xor_si128(c2[867],_mm_xor_si128(c2[2667],_mm_xor_si128(c2[2669],_mm_xor_si128(c2[2848],_mm_xor_si128(c2[2850],_mm_xor_si128(c2[2686],_mm_xor_si128(c2[2868],_mm_xor_si128(c2[2688],_mm_xor_si128(c2[342],_mm_xor_si128(c2[344],_mm_xor_si128(c2[2683],c2[2685]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 16
     d2[144]=_mm_xor_si128(c2[2701],_mm_xor_si128(c2[2521],_mm_xor_si128(c2[1980],_mm_xor_si128(c2[1800],_mm_xor_si128(c2[2522],_mm_xor_si128(c2[1981],_mm_xor_si128(c2[1801],_mm_xor_si128(c2[1807],_mm_xor_si128(c2[1086],_mm_xor_si128(c2[1101],_mm_xor_si128(c2[921],_mm_xor_si128(c2[380],_mm_xor_si128(c2[200],_mm_xor_si128(c2[926],_mm_xor_si128(c2[205],_mm_xor_si128(c2[558],_mm_xor_si128(c2[2725],_mm_xor_si128(c2[21],_mm_xor_si128(c2[221],_mm_xor_si128(c2[41],_mm_xor_si128(c2[2379],_mm_xor_si128(c2[2199],_mm_xor_si128(c2[756],_mm_xor_si128(c2[44],_mm_xor_si128(c2[2757],_mm_xor_si128(c2[2577],_mm_xor_si128(c2[2036],_mm_xor_si128(c2[1856],_mm_xor_si128(c2[1681],_mm_xor_si128(c2[1140],_mm_xor_si128(c2[960],_mm_xor_si128(c2[1321],_mm_xor_si128(c2[600],_mm_xor_si128(c2[620],_mm_xor_si128(c2[79],_mm_xor_si128(c2[2778],_mm_xor_si128(c2[1700],_mm_xor_si128(c2[979],_mm_xor_si128(c2[255],_mm_xor_si128(c2[2413],_mm_xor_si128(c2[2435],_mm_xor_si128(c2[1894],_mm_xor_si128(c2[1714],_mm_xor_si128(c2[2791],_mm_xor_si128(c2[2070],_mm_xor_si128(c2[2816],_mm_xor_si128(c2[2636],_mm_xor_si128(c2[2095],_mm_xor_si128(c2[1915],_mm_xor_si128(c2[2814],_mm_xor_si128(c2[2273],_mm_xor_si128(c2[2093],_mm_xor_si128(c2[834],_mm_xor_si128(c2[113],_mm_xor_si128(c2[2473],_mm_xor_si128(c2[1932],_mm_xor_si128(c2[1752],_mm_xor_si128(c2[2290],_mm_xor_si128(c2[1569],_mm_xor_si128(c2[150],_mm_xor_si128(c2[2488],_mm_xor_si128(c2[2308],_mm_xor_si128(c2[1952],_mm_xor_si128(c2[1231],_mm_xor_si128(c2[2124],_mm_xor_si128(c2[1412],_mm_xor_si128(c2[2142],_mm_xor_si128(c2[1962],_mm_xor_si128(c2[1430],_mm_xor_si128(c2[1250],_mm_xor_si128(c2[2506],_mm_xor_si128(c2[1965],_mm_xor_si128(c2[1785],_mm_xor_si128(c2[1968],_mm_xor_si128(c2[1247],c2[1782])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 17
     d2[153]=_mm_xor_si128(c2[724],_mm_xor_si128(c2[544],_mm_xor_si128(c2[2342],_mm_xor_si128(c2[2162],_mm_xor_si128(c2[545],_mm_xor_si128(c2[2343],_mm_xor_si128(c2[2163],_mm_xor_si128(c2[2700],_mm_xor_si128(c2[1448],_mm_xor_si128(c2[2003],_mm_xor_si128(c2[1823],_mm_xor_si128(c2[742],_mm_xor_si128(c2[562],_mm_xor_si128(c2[1819],_mm_xor_si128(c2[558],_mm_xor_si128(c2[1460],_mm_xor_si128(c2[199],_mm_xor_si128(c2[1465],_mm_xor_si128(c2[1123],_mm_xor_si128(c2[943],_mm_xor_si128(c2[2741],_mm_xor_si128(c2[2561],_mm_xor_si128(c2[1658],_mm_xor_si128(c2[397],_mm_xor_si128(c2[780],_mm_xor_si128(c2[600],_mm_xor_si128(c2[2398],_mm_xor_si128(c2[2218],_mm_xor_si128(c2[2574],_mm_xor_si128(c2[1502],_mm_xor_si128(c2[1322],_mm_xor_si128(c2[2214],_mm_xor_si128(c2[962],_mm_xor_si128(c2[1513],_mm_xor_si128(c2[432],_mm_xor_si128(c2[252],_mm_xor_si128(c2[2593],_mm_xor_si128(c2[1332],_mm_xor_si128(c2[1157],_mm_xor_si128(c2[2775],_mm_xor_si128(c2[458],_mm_xor_si128(c2[2256],_mm_xor_si128(c2[2076],_mm_xor_si128(c2[814],_mm_xor_si128(c2[2432],_mm_xor_si128(c2[2072],_mm_xor_si128(c2[830],_mm_xor_si128(c2[650],_mm_xor_si128(c2[2448],_mm_xor_si128(c2[2268],_mm_xor_si128(c2[828],_mm_xor_si128(c2[2635],_mm_xor_si128(c2[2455],_mm_xor_si128(c2[1736],_mm_xor_si128(c2[475],_mm_xor_si128(c2[487],_mm_xor_si128(c2[2294],_mm_xor_si128(c2[2114],_mm_xor_si128(c2[313],_mm_xor_si128(c2[1931],_mm_xor_si128(c2[1052],_mm_xor_si128(c2[2850],_mm_xor_si128(c2[2670],_mm_xor_si128(c2[2845],_mm_xor_si128(c2[1584],_mm_xor_si128(c2[147],_mm_xor_si128(c2[1765],_mm_xor_si128(c2[165],_mm_xor_si128(c2[2864],_mm_xor_si128(c2[1783],_mm_xor_si128(c2[1603],_mm_xor_si128(c2[529],_mm_xor_si128(c2[2327],_mm_xor_si128(c2[2147],_mm_xor_si128(c2[2870],c2[1609])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 18
     d2[162]=_mm_xor_si128(c2[181],_mm_xor_si128(c2[1914],c2[2654]));

//row: 19
     d2[171]=_mm_xor_si128(c2[1982],_mm_xor_si128(c2[1983],_mm_xor_si128(c2[1268],_mm_xor_si128(c2[2704],_mm_xor_si128(c2[382],_mm_xor_si128(c2[378],_mm_xor_si128(c2[19],_mm_xor_si128(c2[2179],_mm_xor_si128(c2[2381],_mm_xor_si128(c2[217],_mm_xor_si128(c2[2038],_mm_xor_si128(c2[1142],_mm_xor_si128(c2[782],_mm_xor_si128(c2[72],_mm_xor_si128(c2[1152],_mm_xor_si128(c2[2595],_mm_xor_si128(c2[1896],_mm_xor_si128(c2[2252],_mm_xor_si128(c2[2088],_mm_xor_si128(c2[2275],_mm_xor_si128(c2[295],_mm_xor_si128(c2[1934],_mm_xor_si128(c2[1751],_mm_xor_si128(c2[2490],_mm_xor_si128(c2[1404],_mm_xor_si128(c2[1585],_mm_xor_si128(c2[1423],_mm_xor_si128(c2[1967],c2[1429]))))))))))))))))))))))))))));

//row: 20
     d2[180]=_mm_xor_si128(c2[185],_mm_xor_si128(c2[5],_mm_xor_si128(c2[6],_mm_xor_si128(c2[2161],_mm_xor_si128(c2[1464],_mm_xor_si128(c2[1284],_mm_xor_si128(c2[1280],_mm_xor_si128(c2[921],_mm_xor_si128(c2[378],_mm_xor_si128(c2[584],_mm_xor_si128(c2[404],_mm_xor_si128(c2[1119],_mm_xor_si128(c2[241],_mm_xor_si128(c2[61],_mm_xor_si128(c2[2035],_mm_xor_si128(c2[1675],_mm_xor_si128(c2[974],_mm_xor_si128(c2[2054],_mm_xor_si128(c2[618],_mm_xor_si128(c2[1338],_mm_xor_si128(c2[2798],_mm_xor_si128(c2[275],_mm_xor_si128(c2[291],_mm_xor_si128(c2[111],_mm_xor_si128(c2[289],_mm_xor_si128(c2[1188],_mm_xor_si128(c2[2827],_mm_xor_si128(c2[2653],_mm_xor_si128(c2[504],_mm_xor_si128(c2[2306],_mm_xor_si128(c2[2487],_mm_xor_si128(c2[2505],_mm_xor_si128(c2[2325],_mm_xor_si128(c2[2869],c2[2322]))))))))))))))))))))))))))))))))));

//row: 21
     d2[189]=_mm_xor_si128(c2[545],_mm_xor_si128(c2[546],_mm_xor_si128(c2[2701],_mm_xor_si128(c2[1985],_mm_xor_si128(c2[1824],_mm_xor_si128(c2[1820],_mm_xor_si128(c2[1641],_mm_xor_si128(c2[1461],_mm_xor_si128(c2[944],_mm_xor_si128(c2[1839],_mm_xor_si128(c2[1659],_mm_xor_si128(c2[601],_mm_xor_si128(c2[2575],_mm_xor_si128(c2[2215],_mm_xor_si128(c2[1514],_mm_xor_si128(c2[2594],_mm_xor_si128(c2[1338],_mm_xor_si128(c2[1158],_mm_xor_si128(c2[450],_mm_xor_si128(c2[995],_mm_xor_si128(c2[815],_mm_xor_si128(c2[651],_mm_xor_si128(c2[829],_mm_xor_si128(c2[1908],_mm_xor_si128(c2[1728],_mm_xor_si128(c2[488],_mm_xor_si128(c2[494],_mm_xor_si128(c2[314],_mm_xor_si128(c2[1044],_mm_xor_si128(c2[2846],_mm_xor_si128(c2[328],_mm_xor_si128(c2[148],_mm_xor_si128(c2[2128],_mm_xor_si128(c2[2865],_mm_xor_si128(c2[530],_mm_xor_si128(c2[163],c2[2862]))))))))))))))))))))))))))))))))))));

//row: 22
     d2[198]=_mm_xor_si128(c2[1101],c2[764]);

//row: 23
     d2[207]=_mm_xor_si128(c2[724],_mm_xor_si128(c2[601],c2[1533]));

//row: 24
     d2[216]=_mm_xor_si128(c2[2539],_mm_xor_si128(c2[1838],c2[1068]));

//row: 25
     d2[225]=_mm_xor_si128(c2[8],c2[2793]);

//row: 26
     d2[234]=_mm_xor_si128(c2[1266],_mm_xor_si128(c2[1086],_mm_xor_si128(c2[1268],_mm_xor_si128(c2[1267],_mm_xor_si128(c2[1087],_mm_xor_si128(c2[1260],_mm_xor_si128(c2[363],_mm_xor_si128(c2[545],_mm_xor_si128(c2[2545],_mm_xor_si128(c2[2365],_mm_xor_si128(c2[2538],_mm_xor_si128(c2[2361],_mm_xor_si128(c2[2543],_mm_xor_si128(c2[2002],_mm_xor_si128(c2[2364],_mm_xor_si128(c2[2184],_mm_xor_si128(c2[1656],_mm_xor_si128(c2[1476],_mm_xor_si128(c2[1658],_mm_xor_si128(c2[2200],_mm_xor_si128(c2[2562],_mm_xor_si128(c2[2382],_mm_xor_si128(c2[2564],_mm_xor_si128(c2[1322],_mm_xor_si128(c2[1142],_mm_xor_si128(c2[1315],_mm_xor_si128(c2[417],_mm_xor_si128(c2[237],_mm_xor_si128(c2[419],_mm_xor_si128(c2[2756],_mm_xor_si128(c2[59],_mm_xor_si128(c2[2235],_mm_xor_si128(c2[2055],_mm_xor_si128(c2[2237],_mm_xor_si128(c2[256],_mm_xor_si128(c2[438],_mm_xor_si128(c2[1699],_mm_xor_si128(c2[2052],_mm_xor_si128(c2[1872],_mm_xor_si128(c2[1171],_mm_xor_si128(c2[991],_mm_xor_si128(c2[1173],_mm_xor_si128(c2[1356],_mm_xor_si128(c2[1718],_mm_xor_si128(c2[1538],_mm_xor_si128(c2[1372],_mm_xor_si128(c2[1192],_mm_xor_si128(c2[1374],_mm_xor_si128(c2[1550],_mm_xor_si128(c2[1370],_mm_xor_si128(c2[1552],_mm_xor_si128(c2[2269],_mm_xor_si128(c2[2631],_mm_xor_si128(c2[2451],_mm_xor_si128(c2[1209],_mm_xor_si128(c2[1029],_mm_xor_si128(c2[1211],_mm_xor_si128(c2[846],_mm_xor_si128(c2[1208],_mm_xor_si128(c2[1028],_mm_xor_si128(c2[2287],_mm_xor_si128(c2[1765],_mm_xor_si128(c2[1585],_mm_xor_si128(c2[1767],_mm_xor_si128(c2[508],_mm_xor_si128(c2[690],_mm_xor_si128(c2[689],_mm_xor_si128(c2[1051],_mm_xor_si128(c2[871],_mm_xor_si128(c2[707],_mm_xor_si128(c2[527],_mm_xor_si128(c2[709],_mm_xor_si128(c2[1242],_mm_xor_si128(c2[1062],_mm_xor_si128(c2[1244],_mm_xor_si128(c2[524],_mm_xor_si128(c2[886],c2[706])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 27
     d2[243]=_mm_xor_si128(c2[2340],c2[1908]);

//row: 28
     d2[252]=_mm_xor_si128(c2[1824],_mm_xor_si128(c2[2380],c2[2072]));

//row: 29
     d2[261]=_mm_xor_si128(c2[908],c2[1693]);

//row: 30
     d2[270]=_mm_xor_si128(c2[1301],_mm_xor_si128(c2[1533],_mm_xor_si128(c2[1572],c2[1246])));

//row: 31
     d2[279]=_mm_xor_si128(c2[2348],_mm_xor_si128(c2[2340],_mm_xor_si128(c2[1625],_mm_xor_si128(c2[739],_mm_xor_si128(c2[744],_mm_xor_si128(c2[565],_mm_xor_si128(c2[385],_mm_xor_si128(c2[23],_mm_xor_si128(c2[2738],_mm_xor_si128(c2[763],_mm_xor_si128(c2[583],_mm_xor_si128(c2[2395],_mm_xor_si128(c2[1499],_mm_xor_si128(c2[1139],_mm_xor_si128(c2[438],_mm_xor_si128(c2[1518],_mm_xor_si128(c2[253],_mm_xor_si128(c2[73],_mm_xor_si128(c2[2253],_mm_xor_si128(c2[2798],_mm_xor_si128(c2[2618],_mm_xor_si128(c2[2454],_mm_xor_si128(c2[2632],_mm_xor_si128(c2[832],_mm_xor_si128(c2[652],_mm_xor_si128(c2[2291],_mm_xor_si128(c2[2288],_mm_xor_si128(c2[2108],_mm_xor_si128(c2[2847],_mm_xor_si128(c2[1770],_mm_xor_si128(c2[2131],_mm_xor_si128(c2[1951],_mm_xor_si128(c2[1789],_mm_xor_si128(c2[2324],_mm_xor_si128(c2[1966],c2[1786])))))))))))))))))))))))))))))))))));

//row: 32
     d2[288]=_mm_xor_si128(c2[1804],_mm_xor_si128(c2[1624],_mm_xor_si128(c2[1805],_mm_xor_si128(c2[1625],_mm_xor_si128(c2[901],_mm_xor_si128(c2[2],_mm_xor_si128(c2[204],_mm_xor_si128(c2[24],_mm_xor_si128(c2[20],_mm_xor_si128(c2[2540],_mm_xor_si128(c2[2203],_mm_xor_si128(c2[2023],_mm_xor_si128(c2[2738],_mm_xor_si128(c2[1860],_mm_xor_si128(c2[1680],_mm_xor_si128(c2[955],_mm_xor_si128(c2[775],_mm_xor_si128(c2[415],_mm_xor_si128(c2[2773],_mm_xor_si128(c2[2593],_mm_xor_si128(c2[794],_mm_xor_si128(c2[2237],_mm_xor_si128(c2[1718],_mm_xor_si128(c2[1538],_mm_xor_si128(c2[1894],_mm_xor_si128(c2[1715],_mm_xor_si128(c2[1910],_mm_xor_si128(c2[1730],_mm_xor_si128(c2[2088],_mm_xor_si128(c2[1908],_mm_xor_si128(c2[2816],_mm_xor_si128(c2[1747],_mm_xor_si128(c2[1567],_mm_xor_si128(c2[1393],_mm_xor_si128(c2[2312],_mm_xor_si128(c2[2132],_mm_xor_si128(c2[1046],_mm_xor_si128(c2[1227],_mm_xor_si128(c2[1245],_mm_xor_si128(c2[1065],_mm_xor_si128(c2[1789],_mm_xor_si128(c2[1609],c2[1062]))))))))))))))))))))))))))))))))))))))))));

//row: 33
     d2[297]=_mm_xor_si128(c2[720],_mm_xor_si128(c2[721],_mm_xor_si128(c2[6],_mm_xor_si128(c2[1999],_mm_xor_si128(c2[2004],_mm_xor_si128(c2[1645],_mm_xor_si128(c2[1119],_mm_xor_si128(c2[1843],_mm_xor_si128(c2[1304],_mm_xor_si128(c2[776],_mm_xor_si128(c2[2759],_mm_xor_si128(c2[2399],_mm_xor_si128(c2[1698],_mm_xor_si128(c2[2778],_mm_xor_si128(c2[1333],_mm_xor_si128(c2[634],_mm_xor_si128(c2[990],_mm_xor_si128(c2[835],_mm_xor_si128(c2[1013],_mm_xor_si128(c2[1912],_mm_xor_si128(c2[672],_mm_xor_si128(c2[489],_mm_xor_si128(c2[1206],_mm_xor_si128(c2[1228],_mm_xor_si128(c2[151],_mm_xor_si128(c2[332],_mm_xor_si128(c2[170],_mm_xor_si128(c2[705],c2[167]))))))))))))))))))))))))))));

//row: 34
     d2[306]=_mm_xor_si128(c2[2161],_mm_xor_si128(c2[1981],_mm_xor_si128(c2[727],_mm_xor_si128(c2[2162],_mm_xor_si128(c2[1982],_mm_xor_si128(c2[728],_mm_xor_si128(c2[1267],_mm_xor_si128(c2[4],_mm_xor_si128(c2[902],_mm_xor_si128(c2[561],_mm_xor_si128(c2[381],_mm_xor_si128(c2[2006],_mm_xor_si128(c2[386],_mm_xor_si128(c2[2002],_mm_xor_si128(c2[18],_mm_xor_si128(c2[1823],_mm_xor_si128(c2[1643],_mm_xor_si128(c2[2560],_mm_xor_si128(c2[2380],_mm_xor_si128(c2[1117],_mm_xor_si128(c2[216],_mm_xor_si128(c2[2021],_mm_xor_si128(c2[1841],_mm_xor_si128(c2[2217],_mm_xor_si128(c2[2037],_mm_xor_si128(c2[774],_mm_xor_si128(c2[1321],_mm_xor_si128(c2[1141],_mm_xor_si128(c2[2757],_mm_xor_si128(c2[781],_mm_xor_si128(c2[2397],_mm_xor_si128(c2[260],_mm_xor_si128(c2[80],_mm_xor_si128(c2[1696],_mm_xor_si128(c2[1160],_mm_xor_si128(c2[2776],_mm_xor_si128(c2[2594],_mm_xor_si128(c2[1520],_mm_xor_si128(c2[1340],_mm_xor_si128(c2[2075],_mm_xor_si128(c2[1895],_mm_xor_si128(c2[632],_mm_xor_si128(c2[2251],_mm_xor_si128(c2[1177],_mm_xor_si128(c2[997],_mm_xor_si128(c2[2276],_mm_xor_si128(c2[2096],_mm_xor_si128(c2[833],_mm_xor_si128(c2[2454],_mm_xor_si128(c2[2274],_mm_xor_si128(c2[1011],_mm_xor_si128(c2[294],_mm_xor_si128(c2[2090],_mm_xor_si128(c2[1910],_mm_xor_si128(c2[2113],_mm_xor_si128(c2[1933],_mm_xor_si128(c2[670],_mm_xor_si128(c2[1750],_mm_xor_si128(c2[667],_mm_xor_si128(c2[487],_mm_xor_si128(c2[2669],_mm_xor_si128(c2[2489],_mm_xor_si128(c2[1226],_mm_xor_si128(c2[1412],_mm_xor_si128(c2[149],_mm_xor_si128(c2[1584],_mm_xor_si128(c2[510],_mm_xor_si128(c2[330],_mm_xor_si128(c2[1602],_mm_xor_si128(c2[1422],_mm_xor_si128(c2[168],_mm_xor_si128(c2[2146],_mm_xor_si128(c2[1966],_mm_xor_si128(c2[703],_mm_xor_si128(c2[1428],_mm_xor_si128(c2[345],c2[165]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 35
     d2[315]=_mm_xor_si128(c2[6],_mm_xor_si128(c2[2705],_mm_xor_si128(c2[2706],_mm_xor_si128(c2[1982],_mm_xor_si128(c2[1285],_mm_xor_si128(c2[1105],_mm_xor_si128(c2[1101],_mm_xor_si128(c2[742],_mm_xor_si128(c2[2181],_mm_xor_si128(c2[396],_mm_xor_si128(c2[216],_mm_xor_si128(c2[940],_mm_xor_si128(c2[62],_mm_xor_si128(c2[2761],_mm_xor_si128(c2[1856],_mm_xor_si128(c2[1496],_mm_xor_si128(c2[795],_mm_xor_si128(c2[1875],_mm_xor_si128(c2[439],_mm_xor_si128(c2[2610],_mm_xor_si128(c2[96],_mm_xor_si128(c2[1718],_mm_xor_si128(c2[112],_mm_xor_si128(c2[2811],_mm_xor_si128(c2[110],_mm_xor_si128(c2[1009],_mm_xor_si128(c2[2648],_mm_xor_si128(c2[2474],_mm_xor_si128(c2[325],_mm_xor_si128(c2[2127],_mm_xor_si128(c2[2308],_mm_xor_si128(c2[2326],_mm_xor_si128(c2[2146],_mm_xor_si128(c2[2690],c2[2143]))))))))))))))))))))))))))))))))));

//row: 36
     d2[324]=_mm_xor_si128(c2[1627],_mm_xor_si128(c2[224],c2[1927]));

//row: 37
     d2[333]=_mm_xor_si128(c2[546],_mm_xor_si128(c2[1803],_mm_xor_si128(c2[547],_mm_xor_si128(c2[1804],_mm_xor_si128(c2[2702],_mm_xor_si128(c2[1080],_mm_xor_si128(c2[1825],_mm_xor_si128(c2[203],_mm_xor_si128(c2[1821],_mm_xor_si128(c2[199],_mm_xor_si128(c2[1462],_mm_xor_si128(c2[20],_mm_xor_si128(c2[2719],_mm_xor_si128(c2[936],_mm_xor_si128(c2[2202],_mm_xor_si128(c2[1660],_mm_xor_si128(c2[218],_mm_xor_si128(c2[38],_mm_xor_si128(c2[602],_mm_xor_si128(c2[1859],_mm_xor_si128(c2[2576],_mm_xor_si128(c2[954],_mm_xor_si128(c2[2216],_mm_xor_si128(c2[594],_mm_xor_si128(c2[1515],_mm_xor_si128(c2[2772],_mm_xor_si128(c2[2595],_mm_xor_si128(c2[973],_mm_xor_si128(c2[1159],_mm_xor_si128(c2[2596],_mm_xor_si128(c2[2416],_mm_xor_si128(c2[451],_mm_xor_si128(c2[1717],_mm_xor_si128(c2[816],_mm_xor_si128(c2[2253],_mm_xor_si128(c2[2073],_mm_xor_si128(c2[652],_mm_xor_si128(c2[1909],_mm_xor_si128(c2[830],_mm_xor_si128(c2[2096],_mm_xor_si128(c2[1729],_mm_xor_si128(c2[296],_mm_xor_si128(c2[116],_mm_xor_si128(c2[489],_mm_xor_si128(c2[1746],_mm_xor_si128(c2[306],_mm_xor_si128(c2[1752],_mm_xor_si128(c2[1572],_mm_xor_si128(c2[1045],_mm_xor_si128(c2[2311],_mm_xor_si128(c2[2847],_mm_xor_si128(c2[1225],_mm_xor_si128(c2[149],_mm_xor_si128(c2[1586],_mm_xor_si128(c2[1406],_mm_xor_si128(c2[2866],_mm_xor_si128(c2[1244],_mm_xor_si128(c2[522],_mm_xor_si128(c2[1788],_mm_xor_si128(c2[2863],_mm_xor_si128(c2[1430],c2[1250])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 38
     d2[342]=_mm_xor_si128(c2[720],_mm_xor_si128(c2[540],_mm_xor_si128(c2[541],_mm_xor_si128(c2[2705],_mm_xor_si128(c2[1999],_mm_xor_si128(c2[1819],_mm_xor_si128(c2[1824],_mm_xor_si128(c2[1465],_mm_xor_si128(c2[198],_mm_xor_si128(c2[1119],_mm_xor_si128(c2[939],_mm_xor_si128(c2[1663],_mm_xor_si128(c2[776],_mm_xor_si128(c2[596],_mm_xor_si128(c2[2579],_mm_xor_si128(c2[2219],_mm_xor_si128(c2[1518],_mm_xor_si128(c2[2598],_mm_xor_si128(c2[1153],_mm_xor_si128(c2[454],_mm_xor_si128(c2[810],_mm_xor_si128(c2[1174],_mm_xor_si128(c2[835],_mm_xor_si128(c2[655],_mm_xor_si128(c2[833],_mm_xor_si128(c2[1732],_mm_xor_si128(c2[492],_mm_xor_si128(c2[309],_mm_xor_si128(c2[1048],_mm_xor_si128(c2[2850],_mm_xor_si128(c2[152],_mm_xor_si128(c2[170],_mm_xor_si128(c2[2869],_mm_xor_si128(c2[525],c2[2866]))))))))))))))))))))))))))))))))));

//row: 39
     d2[351]=_mm_xor_si128(c2[180],_mm_xor_si128(c2[0],_mm_xor_si128(c2[181],_mm_xor_si128(c2[1],_mm_xor_si128(c2[2165],_mm_xor_si128(c2[1267],_mm_xor_si128(c2[1459],_mm_xor_si128(c2[1279],_mm_xor_si128(c2[1284],_mm_xor_si128(c2[925],_mm_xor_si128(c2[579],_mm_xor_si128(c2[399],_mm_xor_si128(c2[1123],_mm_xor_si128(c2[236],_mm_xor_si128(c2[56],_mm_xor_si128(c2[2219],_mm_xor_si128(c2[2039],_mm_xor_si128(c2[1679],_mm_xor_si128(c2[1158],_mm_xor_si128(c2[978],_mm_xor_si128(c2[2058],_mm_xor_si128(c2[613],_mm_xor_si128(c2[94],_mm_xor_si128(c2[2793],_mm_xor_si128(c2[270],_mm_xor_si128(c2[295],_mm_xor_si128(c2[115],_mm_xor_si128(c2[473],_mm_xor_si128(c2[293],_mm_xor_si128(c2[1192],_mm_xor_si128(c2[132],_mm_xor_si128(c2[2831],_mm_xor_si128(c2[2648],_mm_xor_si128(c2[128],_mm_xor_si128(c2[688],_mm_xor_si128(c2[508],_mm_xor_si128(c2[2310],_mm_xor_si128(c2[2491],_mm_xor_si128(c2[2509],_mm_xor_si128(c2[2329],_mm_xor_si128(c2[165],_mm_xor_si128(c2[2864],c2[2326]))))))))))))))))))))))))))))))))))))))))));

//row: 40
     d2[360]=_mm_xor_si128(c2[1984],_mm_xor_si128(c2[1446],_mm_xor_si128(c2[1985],_mm_xor_si128(c2[1447],_mm_xor_si128(c2[1261],_mm_xor_si128(c2[723],_mm_xor_si128(c2[384],_mm_xor_si128(c2[2725],_mm_xor_si128(c2[380],_mm_xor_si128(c2[2721],_mm_xor_si128(c2[21],_mm_xor_si128(c2[2542],_mm_xor_si128(c2[2362],_mm_xor_si128(c2[2383],_mm_xor_si128(c2[1836],_mm_xor_si128(c2[219],_mm_xor_si128(c2[2740],_mm_xor_si128(c2[2560],_mm_xor_si128(c2[1116],_mm_xor_si128(c2[2040],_mm_xor_si128(c2[1502],_mm_xor_si128(c2[1135],_mm_xor_si128(c2[597],_mm_xor_si128(c2[775],_mm_xor_si128(c2[237],_mm_xor_si128(c2[74],_mm_xor_si128(c2[2415],_mm_xor_si128(c2[1154],_mm_xor_si128(c2[616],_mm_xor_si128(c2[2597],_mm_xor_si128(c2[2239],_mm_xor_si128(c2[2059],_mm_xor_si128(c2[1898],_mm_xor_si128(c2[1351],_mm_xor_si128(c2[2254],_mm_xor_si128(c2[1896],_mm_xor_si128(c2[1716],_mm_xor_si128(c2[2090],_mm_xor_si128(c2[1552],_mm_xor_si128(c2[2268],_mm_xor_si128(c2[1730],_mm_xor_si128(c2[288],_mm_xor_si128(c2[2809],_mm_xor_si128(c2[2629],_mm_xor_si128(c2[1927],_mm_xor_si128(c2[1389],_mm_xor_si128(c2[1753],_mm_xor_si128(c2[1386],_mm_xor_si128(c2[1206],_mm_xor_si128(c2[2492],_mm_xor_si128(c2[1945],_mm_xor_si128(c2[1406],_mm_xor_si128(c2[868],_mm_xor_si128(c2[1587],_mm_xor_si128(c2[1229],_mm_xor_si128(c2[1049],_mm_xor_si128(c2[1425],_mm_xor_si128(c2[887],_mm_xor_si128(c2[1969],_mm_xor_si128(c2[1422],_mm_xor_si128(c2[1422],_mm_xor_si128(c2[1064],c2[884]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));

//row: 41
     d2[369]=_mm_xor_si128(c2[1081],_mm_xor_si128(c2[901],_mm_xor_si128(c2[902],_mm_xor_si128(c2[187],_mm_xor_si128(c2[2360],_mm_xor_si128(c2[2180],_mm_xor_si128(c2[2185],_mm_xor_si128(c2[1826],_mm_xor_si128(c2[21],_mm_xor_si128(c2[1480],_mm_xor_si128(c2[1300],_mm_xor_si128(c2[2024],_mm_xor_si128(c2[1137],_mm_xor_si128(c2[957],_mm_xor_si128(c2[61],_mm_xor_si128(c2[2580],_mm_xor_si128(c2[1879],_mm_xor_si128(c2[80],_mm_xor_si128(c2[1514],_mm_xor_si128(c2[815],_mm_xor_si128(c2[1171],_mm_xor_si128(c2[2792],_mm_xor_si128(c2[1196],_mm_xor_si128(c2[1016],_mm_xor_si128(c2[1194],_mm_xor_si128(c2[2093],_mm_xor_si128(c2[853],_mm_xor_si128(c2[670],_mm_xor_si128(c2[1409],_mm_xor_si128(c2[332],_mm_xor_si128(c2[504],_mm_xor_si128(c2[522],_mm_xor_si128(c2[342],_mm_xor_si128(c2[886],c2[348]))))))))))))))))))))))))))))))))));
  }
}