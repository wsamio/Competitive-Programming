#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> cnt;
  int res = 0;
  for(int i = 0; i < n; i++) {
    a[i] %= m;
    cnt[a[i]]++;
    res += cnt[a[i]] * cnt[m - a[i]];
  }
  cout << res << endl;
}
