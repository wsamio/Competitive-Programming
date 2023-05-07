// task : https://atcoder.jp/contests/abc213/tasks
#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 42
#endif

void Testcase() {
  int A, B;
  cin >> A >> B;
  int res = 0, k = 0, add = 1;
  while(A > 0 or B > 0) {
    if(B & 1) {
      if(!(A & 1)) {
        res += add;
      }
    } else {
      if(A & 1) {
        res += add;
      }
    }
    A /= 2, B /= 2;
    add *= 2;
  }
  cout << res << '\n';
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