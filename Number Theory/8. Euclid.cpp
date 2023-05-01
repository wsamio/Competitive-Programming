#include <bits/stdc++.h>
using namespace std;

/*

//first approach

int GCD(int a, int b) {
  if(a < b) swap(a, b);
  if(b == 0) return a;
  return GCD(a % b, b);
}

//second approach

int GCD(int a, int b) {
  a = a % b;
  if(a == 0) return b;
  return GCD(b, a);
}

*/

//third approach

int GCD(int a, int b) {
    if(b == 0) return a;
    return GCD(b, a % b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << GCD(a, b) << endl;
}