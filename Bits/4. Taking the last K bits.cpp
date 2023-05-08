#include<bits/stdc++.h>

using namespace std;

int main() {
  int n = 10, k = 3;

  //first method
  //                    n = 1 0 1 0
  //         (1 << 3) - 1 = 0 1 1 1
  // (n & ((1 << k) - 1)) = 0 0 1 0

  cout << (n & ((1 << k) - 1)) << '\n';
  
  //second method
  //            n = 1 0 1 0
  //     (1 << 3) = 1 0 0 0 
  // n % (1 << 3) = 0 0 1 0
  
  cout << n % (1 << k) << '\n';
}