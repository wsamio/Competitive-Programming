#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

//recursive approach
int power(int a, int n) {
	if(n == 1) return a % mod;
	if(n&1) {
		int x = power(a, n/2);
		return (1ll * x * x) % mod * a % mod;
	} else {
		int x = power(a, n/2);
		return 1ll * x * x % mod; 
	}
}

//iterative approach with binary value of n
int iterative_power(int a, int n) {
	int res = 1;
	while(n) {
		if(n&1) res = 1ll * res * a % mod;
		a = 1ll * a * a % mod;
		n /= 2;
	}
	return res;
}

int main() {
	int a = 3, n = 1000000000;
	cout << power(a, n) << endl;
	cout << iterative_power(a, n) << endl;
}