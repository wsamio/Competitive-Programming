#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int spf[N];

int main() {
  for(int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for(int i = 2; i < N; i++) {
    for(int j = i; j < N; j += i) {
      spf[j] = min(spf[j], i);
    }
  }
  int q;
  cin >> q;
  while(q--) {
    int n;
    cin >> n;
    vector<int> ans;
    while(n > 1) {
      ans.push_back(spf[n]);
      n /= spf[n];
    }
    for(auto i: ans){
      cout << i << ' ';
    }
    cout << endl;
  }
}
