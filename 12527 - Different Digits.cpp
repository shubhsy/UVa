/**
	UVa 12527 - Different Digits
	by Rico Tiongson
	Submitted: May 20, 2013
	Accepted 0.015s C++
	O(2logn) time
*/
#include<cstdio>
#include<algorithm>
using namespace std;
int v[2754] = {1,2,3,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38,39,40,41,42,43,45,46,47,48,49,50,51,52,53,54,56,57,58,59,60,61,62,63,64,65,67,68,69,70,71,72,73,74,75,76,78,79,80,81,82,83,84,85,86,87,89,90,91,92,93,94,95,96,97,98,102,103,104,105,106,107,108,109,120,123,124,125,126,127,128,129,130,132,134,135,136,137,138,139,140,142,143,145,146,147,148,149,150,152,153,154,156,157,158,159,160,162,163,164,165,167,168,169,170,172,173,174,175,176,178,179,180,182,183,184,185,186,187,189,190,192,193,194,195,196,197,198,201,203,204,205,206,207,208,209,210,213,214,215,216,217,218,219,230,231,234,235,236,237,238,239,240,241,243,245,246,247,248,249,250,251,253,254,256,257,258,259,260,261,263,264,265,267,268,269,270,271,273,274,275,276,278,279,280,281,283,284,285,286,287,289,290,291,293,294,295,296,297,298,301,302,304,305,306,307,308,309,310,312,314,315,316,317,318,319,320,321,324,325,326,327,328,329,340,341,342,345,346,347,348,349,350,351,352,354,356,357,358,359,360,361,362,364,365,367,368,369,370,371,372,374,375,376,378,379,380,381,382,384,385,386,387,389,390,391,392,394,395,396,397,398,401,402,403,405,406,407,408,409,410,412,413,415,416,417,418,419,420,421,423,425,426,427,428,429,430,431,432,435,436,437,438,439,450,451,452,453,456,457,458,459,460,461,462,463,465,467,468,469,470,471,472,473,475,476,478,479,480,481,482,483,485,486,487,489,490,491,492,493,495,496,497,498,501,502,503,504,506,507,508,509,510,512,513,514,516,517,518,519,520,521,523,524,526,527,528,529,530,531,532,534,536,537,538,539,540,541,542,543,546,547,548,549,560,561,562,563,564,567,568,569,570,571,572,573,574,576,578,579,580,581,582,583,584,586,587,589,590,591,592,593,594,596,597,598,601,602,603,604,605,607,608,609,610,612,613,614,615,617,618,619,620,621,623,624,625,627,628,629,630,631,632,634,635,637,638,639,640,641,642,643,645,647,648,649,650,651,652,653,654,657,658,659,670,671,672,673,674,675,678,679,680,681,682,683,684,685,687,689,690,691,692,693,694,695,697,698,701,702,703,704,705,706,708,709,710,712,713,714,715,716,718,719,720,721,723,724,725,726,728,729,730,731,732,734,735,736,738,739,740,741,742,743,745,746,748,749,750,751,752,753,754,756,758,759,760,761,762,763,764,765,768,769,780,781,782,783,784,785,786,789,790,791,792,793,794,795,796,798,801,802,803,804,805,806,807,809,810,812,813,814,815,816,817,819,820,821,823,824,825,826,827,829,830,831,832,834,835,836,837,839,840,841,842,843,845,846,847,849,850,851,852,853,854,856,857,859,860,861,862,863,864,865,867,869,870,871,872,873,874,875,876,879,890,891,892,893,894,895,896,897,901,902,903,904,905,906,907,908,910,912,913,914,915,916,917,918,920,921,923,924,925,926,927,928,930,931,932,934,935,936,937,938,940,941,942,943,945,946,947,948,950,951,952,953,954,956,957,958,960,961,962,963,964,965,967,968,970,971,972,973,974,975,976,978,980,981,982,983,984,985,986,987,1023,1024,1025,1026,1027,1028,1029,1032,1034,1035,1036,1037,1038,1039,1042,1043,1045,1046,1047,1048,1049,1052,1053,1054,1056,1057,1058,1059,1062,1063,1064,1065,1067,1068,1069,1072,1073,1074,1075,1076,1078,1079,1082,1083,1084,1085,1086,1087,1089,1092,1093,1094,1095,1096,1097,1098,1203,1204,1205,1206,1207,1208,1209,1230,1234,1235,1236,1237,1238,1239,1240,1243,1245,1246,1247,1248,1249,1250,1253,1254,1256,1257,1258,1259,1260,1263,1264,1265,1267,1268,1269,1270,1273,1274,1275,1276,1278,1279,1280,1283,1284,1285,1286,1287,1289,1290,1293,1294,1295,1296,1297,1298,1302,1304,1305,1306,1307,1308,1309,1320,1324,1325,1326,1327,1328,1329,1340,1342,1345,1346,1347,1348,1349,1350,1352,1354,1356,1357,1358,1359,1360,1362,1364,1365,1367,1368,1369,1370,1372,1374,1375,1376,1378,1379,1380,1382,1384,1385,1386,1387,1389,1390,1392,1394,1395,1396,1397,1398,1402,1403,1405,1406,1407,1408,1409,1420,1423,1425,1426,1427,1428,1429,1430,1432,1435,1436,1437,1438,1439,1450,1452,1453,1456,1457,1458,1459,1460,1462,1463,1465,1467,1468,1469,1470,1472,1473,1475,1476,1478,1479,1480,1482,1483,1485,1486,1487,1489,1490,1492,1493,1495,1496,1497,1498,1502,1503,1504,1506,1507,1508,1509,1520,1523,1524,1526,1527,1528,1529,1530,1532,1534,1536,1537,1538,1539,1540,1542,1543,1546,1547,1548,1549,1560,1562,1563,1564,1567,1568,1569,1570,1572,1573,1574,1576,1578,1579,1580,1582,1583,1584,1586,1587,1589,1590,1592,1593,1594,1596,1597,1598,1602,1603,1604,1605,1607,1608,1609,1620,1623,1624,1625,1627,1628,1629,1630,1632,1634,1635,1637,1638,1639,1640,1642,1643,1645,1647,1648,1649,1650,1652,1653,1654,1657,1658,1659,1670,1672,1673,1674,1675,1678,1679,1680,1682,1683,1684,1685,1687,1689,1690,1692,1693,1694,1695,1697,1698,1702,1703,1704,1705,1706,1708,1709,1720,1723,1724,1725,1726,1728,1729,1730,1732,1734,1735,1736,1738,1739,1740,1742,1743,1745,1746,1748,1749,1750,1752,1753,1754,1756,1758,1759,1760,1762,1763,1764,1765,1768,1769,1780,1782,1783,1784,1785,1786,1789,1790,1792,1793,1794,1795,1796,1798,1802,1803,1804,1805,1806,1807,1809,1820,1823,1824,1825,1826,1827,1829,1830,1832,1834,1835,1836,1837,1839,1840,1842,1843,1845,1846,1847,1849,1850,1852,1853,1854,1856,1857,1859,1860,1862,1863,1864,1865,1867,1869,1870,1872,1873,1874,1875,1876,1879,1890,1892,1893,1894,1895,1896,1897,1902,1903,1904,1905,1906,1907,1908,1920,1923,1924,1925,1926,1927,1928,1930,1932,1934,1935,1936,1937,1938,1940,1942,1943,1945,1946,1947,1948,1950,1952,1953,1954,1956,1957,1958,1960,1962,1963,1964,1965,1967,1968,1970,1972,1973,1974,1975,1976,1978,1980,1982,1983,1984,1985,1986,1987,2013,2014,2015,2016,2017,2018,2019,2031,2034,2035,2036,2037,2038,2039,2041,2043,2045,2046,2047,2048,2049,2051,2053,2054,2056,2057,2058,2059,2061,2063,2064,2065,2067,2068,2069,2071,2073,2074,2075,2076,2078,2079,2081,2083,2084,2085,2086,2087,2089,2091,2093,2094,2095,2096,2097,2098,2103,2104,2105,2106,2107,2108,2109,2130,2134,2135,2136,2137,2138,2139,2140,2143,2145,2146,2147,2148,2149,2150,2153,2154,2156,2157,2158,2159,2160,2163,2164,2165,2167,2168,2169,2170,2173,2174,2175,2176,2178,2179,2180,2183,2184,2185,2186,2187,2189,2190,2193,2194,2195,2196,2197,2198,2301,2304,2305,2306,2307,2308,2309,2310,2314,2315,2316,2317,2318,2319,2340,2341,2345,2346,2347,2348,2349,2350,2351,2354,2356,2357,2358,2359,2360,2361,2364,2365,2367,2368,2369,2370,2371,2374,2375,2376,2378,2379,2380,2381,2384,2385,2386,2387,2389,2390,2391,2394,2395,2396,2397,2398,2401,2403,2405,2406,2407,2408,2409,2410,2413,2415,2416,2417,2418,2419,2430,2431,2435,2436,2437,2438,2439,2450,2451,2453,2456,2457,2458,2459,2460,2461,2463,2465,2467,2468,2469,2470,2471,2473,2475,2476,2478,2479,2480,2481,2483,2485,2486,2487,2489,2490,2491,2493,2495,2496,2497,2498,2501,2503,2504,2506,2507,2508,2509,2510,2513,2514,2516,2517,2518,2519,2530,2531,2534,2536,2537,2538,2539,2540,2541,2543,2546,2547,2548,2549,2560,2561,2563,2564,2567,2568,2569,2570,2571,2573,2574,2576,2578,2579,2580,2581,2583,2584,2586,2587,2589,2590,2591,2593,2594,2596,2597,2598,2601,2603,2604,2605,2607,2608,2609,2610,2613,2614,2615,2617,2618,2619,2630,2631,2634,2635,2637,2638,2639,2640,2641,2643,2645,2647,2648,2649,2650,2651,2653,2654,2657,2658,2659,2670,2671,2673,2674,2675,2678,2679,2680,2681,2683,2684,2685,2687,2689,2690,2691,2693,2694,2695,2697,2698,2701,2703,2704,2705,2706,2708,2709,2710,2713,2714,2715,2716,2718,2719,2730,2731,2734,2735,2736,2738,2739,2740,2741,2743,2745,2746,2748,2749,2750,2751,2753,2754,2756,2758,2759,2760,2761,2763,2764,2765,2768,2769,2780,2781,2783,2784,2785,2786,2789,2790,2791,2793,2794,2795,2796,2798,2801,2803,2804,2805,2806,2807,2809,2810,2813,2814,2815,2816,2817,2819,2830,2831,2834,2835,2836,2837,2839,2840,2841,2843,2845,2846,2847,2849,2850,2851,2853,2854,2856,2857,2859,2860,2861,2863,2864,2865,2867,2869,2870,2871,2873,2874,2875,2876,2879,2890,2891,2893,2894,2895,2896,2897,2901,2903,2904,2905,2906,2907,2908,2910,2913,2914,2915,2916,2917,2918,2930,2931,2934,2935,2936,2937,2938,2940,2941,2943,2945,2946,2947,2948,2950,2951,2953,2954,2956,2957,2958,2960,2961,2963,2964,2965,2967,2968,2970,2971,2973,2974,2975,2976,2978,2980,2981,2983,2984,2985,2986,2987,3012,3014,3015,3016,3017,3018,3019,3021,3024,3025,3026,3027,3028,3029,3041,3042,3045,3046,3047,3048,3049,3051,3052,3054,3056,3057,3058,3059,3061,3062,3064,3065,3067,3068,3069,3071,3072,3074,3075,3076,3078,3079,3081,3082,3084,3085,3086,3087,3089,3091,3092,3094,3095,3096,3097,3098,3102,3104,3105,3106,3107,3108,3109,3120,3124,3125,3126,3127,3128,3129,3140,3142,3145,3146,3147,3148,3149,3150,3152,3154,3156,3157,3158,3159,3160,3162,3164,3165,3167,3168,3169,3170,3172,3174,3175,3176,3178,3179,3180,3182,3184,3185,3186,3187,3189,3190,3192,3194,3195,3196,3197,3198,3201,3204,3205,3206,3207,3208,3209,3210,3214,3215,3216,3217,3218,3219,3240,3241,3245,3246,3247,3248,3249,3250,3251,3254,3256,3257,3258,3259,3260,3261,3264,3265,3267,3268,3269,3270,3271,3274,3275,3276,3278,3279,3280,3281,3284,3285,3286,3287,3289,3290,3291,3294,3295,3296,3297,3298,3401,3402,3405,3406,3407,3408,3409,3410,3412,3415,3416,3417,3418,3419,3420,3421,3425,3426,3427,3428,3429,3450,3451,3452,3456,3457,3458,3459,3460,3461,3462,3465,3467,3468,3469,3470,3471,3472,3475,3476,3478,3479,3480,3481,3482,3485,3486,3487,3489,3490,3491,3492,3495,3496,3497,3498,3501,3502,3504,3506,3507,3508,3509,3510,3512,3514,3516,3517,3518,3519,3520,3521,3524,3526,3527,3528,3529,3540,3541,3542,3546,3547,3548,3549,3560,3561,3562,3564,3567,3568,3569,3570,3571,3572,3574,3576,3578,3579,3580,3581,3582,3584,3586,3587,3589,3590,3591,3592,3594,3596,3597,3598,3601,3602,3604,3605,3607,3608,3609,3610,3612,3614,3615,3617,3618,3619,3620,3621,3624,3625,3627,3628,3629,3640,3641,3642,3645,3647,3648,3649,3650,3651,3652,3654,3657,3658,3659,3670,3671,3672,3674,3675,3678,3679,3680,3681,3682,3684,3685,3687,3689,3690,3691,3692,3694,3695,3697,3698,3701,3702,3704,3705,3706,3708,3709,3710,3712,3714,3715,3716,3718,3719,3720,3721,3724,3725,3726,3728,3729,3740,3741,3742,3745,3746,3748,3749,3750,3751,3752,3754,3756,3758,3759,3760,3761,3762,3764,3765,3768,3769,3780,3781,3782,3784,3785,3786,3789,3790,3791,3792,3794,3795,3796,3798,3801,3802,3804,3805,3806,3807,3809,3810,3812,3814,3815,3816,3817,3819,3820,3821,3824,3825,3826,3827,3829,3840,3841,3842,3845,3846,3847,3849,3850,3851,3852,3854,3856,3857,3859,3860,3861,3862,3864,3865,3867,3869,3870,3871,3872,3874,3875,3876,3879,3890,3891,3892,3894,3895,3896,3897,3901,3902,3904,3905,3906,3907,3908,3910,3912,3914,3915,3916,3917,3918,3920,3921,3924,3925,3926,3927,3928,3940,3941,3942,3945,3946,3947,3948,3950,3951,3952,3954,3956,3957,3958,3960,3961,3962,3964,3965,3967,3968,3970,3971,3972,3974,3975,3976,3978,3980,3981,3982,3984,3985,3986,3987,4012,4013,4015,4016,4017,4018,4019,4021,4023,4025,4026,4027,4028,4029,4031,4032,4035,4036,4037,4038,4039,4051,4052,4053,4056,4057,4058,4059,4061,4062,4063,4065,4067,4068,4069,4071,4072,4073,4075,4076,4078,4079,4081,4082,4083,4085,4086,4087,4089,4091,4092,4093,4095,4096,4097,4098,4102,4103,4105,4106,4107,4108,4109,4120,4123,4125,4126,4127,4128,4129,4130,4132,4135,4136,4137,4138,4139,4150,4152,4153,4156,4157,4158,4159,4160,4162,4163,4165,4167,4168,4169,4170,4172,4173,4175,4176,4178,4179,4180,4182,4183,4185,4186,4187,4189,4190,4192,4193,4195,4196,4197,4198,4201,4203,4205,4206,4207,4208,4209,4210,4213,4215,4216,4217,4218,4219,4230,4231,4235,4236,4237,4238,4239,4250,4251,4253,4256,4257,4258,4259,4260,4261,4263,4265,4267,4268,4269,4270,4271,4273,4275,4276,4278,4279,4280,4281,4283,4285,4286,4287,4289,4290,4291,4293,4295,4296,4297,4298,4301,4302,4305,4306,4307,4308,4309,4310,4312,4315,4316,4317,4318,4319,4320,4321,4325,4326,4327,4328,4329,4350,4351,4352,4356,4357,4358,4359,4360,4361,4362,4365,4367,4368,4369,4370,4371,4372,4375,4376,4378,4379,4380,4381,4382,4385,4386,4387,4389,4390,4391,4392,4395,4396,4397,4398,4501,4502,4503,4506,4507,4508,4509,4510,4512,4513,4516,4517,4518,4519,4520,4521,4523,4526,4527,4528,4529,4530,4531,4532,4536,4537,4538,4539,4560,4561,4562,4563,4567,4568,4569,4570,4571,4572,4573,4576,4578,4579,4580,4581,4582,4583,4586,4587,4589,4590,4591,4592,4593,4596,4597,4598,4601,4602,4603,4605,4607,4608,4609,4610,4612,4613,4615,4617,4618,4619,4620,4621,4623,4625,4627,4628,4629,4630,4631,4632,4635,4637,4638,4639,4650,4651,4652,4653,4657,4658,4659,4670,4671,4672,4673,4675,4678,4679,4680,4681,4682,4683,4685,4687,4689,4690,4691,4692,4693,4695,4697,4698,4701,4702,4703,4705,4706,4708,4709,4710,4712,4713,4715,4716,4718,4719,4720,4721,4723,4725,4726,4728,4729,4730,4731,4732,4735,4736,4738,4739,4750,4751,4752,4753,4756,4758,4759,4760,4761,4762,4763,4765,4768,4769,4780,4781,4782,4783,4785,4786,4789,4790,4791,4792,4793,4795,4796,4798,4801,4802,4803,4805,4806,4807,4809,4810,4812,4813,4815,4816,4817,4819,4820,4821,4823,4825,4826,4827,4829,4830,4831,4832,4835,4836,4837,4839,4850,4851,4852,4853,4856,4857,4859,4860,4861,4862,4863,4865,4867,4869,4870,4871,4872,4873,4875,4876,4879,4890,4891,4892,4893,4895,4896,4897,4901,4902,4903,4905,4906,4907,4908,4910,4912,4913,4915,4916,4917,4918,4920,4921,4923,4925,4926,4927,4928,4930,4931,4932,4935,4936,4937,4938,4950,4951,4952,4953,4956,4957,4958,4960,4961,4962,4963,4965,4967,4968,4970,4971,4972,4973,4975,4976,4978,4980,4981,4982,4983,4985,4986,4987},a,b,*p;
int main(){
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b<a) swap(a,b);
		p = upper_bound(v,v+2754,b);
		printf("%d\n",p-lower_bound(v,p,a));
	}
}
