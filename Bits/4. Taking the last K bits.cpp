#include<bits/stdc++.h>

using namespace std;

int main() {
  int n = 10, k = 3;
  cout << (n & ((1 << k) - 1)) << '\n';
}