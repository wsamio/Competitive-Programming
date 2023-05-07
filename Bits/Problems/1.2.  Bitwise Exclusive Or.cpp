// task : https://atcoder.jp/contests/abc213/tasks
#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int A, B, C;
  cin >> A >> B;
  cout << (A ^ B) << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T = 1;
  //cin >> T;
  while(T--) {
    Testcase();
  }
}