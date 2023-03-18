#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
bool f[N];

int main() {
  int n;
  cin >> n;
  vector<int> primes;
  f[1] = true;
  for(int i = 2; i * i <= n; i++) {
    if(!f[i]) {
      for(int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  for(int i = 2; i <= n; i++) {
    if(!f[i]) {
      primes.push_back(i);
    }
  }
  for(auto x: primes) {
    cout << x << ' ';
  }
}
