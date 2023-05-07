#include<bits/stdc++.h>

using namespace std;

int main() {
	int n = 11, k = 2;
	//setting kth bit on
	cout << (n | (1 << k)) << '\n';

	//stting kth bit off
	k = 3;
	cout << (n & ((1 << 30) - 1 - (1 << k))) << '\n';

	//									  (1 << 30) = 1000000000000000000000000000000
	//								(1 << 30) - 1 = 0111111111111111111111111111111
	//	 ((1 << 30) - 1 - (1 << k)) = 0111111111111111111111111110111 [if k = 3]
	//                                                      & 0001011
	//                                                     ----------
	//                                                        0000011 [kth = 3rd bit is off now]
}