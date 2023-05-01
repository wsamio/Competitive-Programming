#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
  a = a % b;
  if(a == 0) return b;
  return GCD(b, a);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << GCD(a, b) << endl;
}