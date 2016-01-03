/**
	UVa 12620 - Fibonacci Sum
	by Rico Tiongson
	Submitted: May 19, 2013
	Accepted 0.016s C
	O(2) time
*/
#include<stdio.h>
int f[]={0,1,2,4,7,12,20,33,54,88,143,232,276,309,386,396,483,580,664,745,810,856,867,924,992,1017,1110,1128,1139,1168,1208,1277,1286,1364,1451,1516,1568,1585,1654,1740,1795,1836,1932,1969,2002,2072,2075,2148,2224,2273,2298,2372,2471,2544,2616,2661,2678,2740,2819,2860,2880,2941,3022,3064,3087,3152,3240,3293,3334,3428,3463,3492,3556,3649,3706,3756,3763,3820,3884,3905,3990,3996,4087,4184,4272,4357,4430,4488,4519,4608,4628,4637,4666,4704,4771,4776,4848,4925,4974,5000,5075,5076,5152,5229,5282,5312,5395,5408,5504,5513,5518,5532,5551,5584,5636,5721,5758,5780,5839,5920,5960,5981,6042,6124,6167,6192,6260,6353,6414,6468,6483,6552,6636,6689,6726,6816,6843,6860,6904,6965,6970,7036,7107,7144,7152,7197,7250,7348,7399,7448,7448,7497,7546,7644,7691,7736,7828,7865,7894,7960,8055,8116,8172,8189,8262,8352,8415,8468,8484,8553,8638,8692,8731,8824,8856,8881,8938,9020,9059,9080,9140,9221,9262,9284,9347,9432,9480,9513,9594,9608,9703,9712,9716,9729,9746,9776,9823,9900,9924,9925,9950,9976,10027,10104,10132,10137,10170,10208,10279,10288,10368,10457,10526,10584,10611,10696,10708,10805,10814,10820,10835,10856,10892,10949,11042,11092,11135,11228,11264,11293,11358,11452,11511,11564,11576,11641,11718,11760,11779,11840,11920,11961,11982,12044,12127,12172,12200,12273,12274,12348,12423,12472,12496,12569,12666,12736,12803,12840,12844,12885,12930,13016,13047,13064,13112,13177,13190,13268,13359,13428,13488,13517,13606,13624,13631,13656,13688,13745,13834,13880,13915,13996,14012,14109,14122,14132,14155,14188,14244,14333,14378,14412,14491,14504,14596,14601,14698,14700,14799,14800},n;
long long x,y;
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%lld %lld",&x,&y);
		x--;
		x = 14800LL*(x/300LL) + f[x%300LL];
		y = 14800LL*(y/300LL) + f[y%300LL];
		printf("%lld\n",y-x);
	}
}
