#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int n = 3;
	int a[] = {2, 1, 3};
	for(int mask = 0; mask < (1 << n); mask++) {
		cout << "{ ";
		for(int i = 0; i < n; i++) {
			if((mask >> i) & 1) {
				cout << a[i] << ' ';
			}
		}
		cout << "}\n";
	}
}

// if a particular bit is on than that index value is printed
// 0 0 0
// 0 0 1
// 0 1 0
// 0 1 1
// 1 0 0
// 1 0 1
// 1 1 0
// 1 1 1