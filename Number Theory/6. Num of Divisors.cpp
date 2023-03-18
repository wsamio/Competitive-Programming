#include <bits/stdc++.h>
using namespace std;

int d[104];
int main() {
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    for(int j = i; j <= n; j += i) {
      d[j]++;
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << d[i] << ' ';
  }
}
