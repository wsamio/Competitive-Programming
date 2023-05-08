#include<bits/stdc++.h>

using namespace std;

int main() {
	int n = 10911021;
	int n_ = n, res = 0;
	while(n_ % 4!= 3) n_--;

	//print : 0 ^ 1 ^ 2 ^ 3 ^ .... ^ n 
	for(int i = n_ + 1; i <= n; i++) {
		res ^= i;
	}
	cout << res << '\n';
}

// n ^ (n + 1) = 1 (if n is even)
//    0 ^ 1  ^  2 ^ 3
// = (0 ^ 1) ^ (2 ^ 3)
// = (  1  ) ^ (  1  )
// = 0