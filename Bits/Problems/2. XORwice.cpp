//task : https://codeforces.com/problemset/problem/1421/A
#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  long long a, b;
  cin >> a >> b;
  long long c = (a & b);
  cout << (a ^ c) + (b ^ c) << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  cin >> T;
  while(T--) {
    Testcase();
  }
}