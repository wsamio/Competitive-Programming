#include <bits/stdc++.h>
using namespace std;

int main() {
  tuple <int, float, string> x;
  x = make_tuple(4, 3.1416, "Samio");
  cout << get<0>(x) << ' ' << get<1>(x) << ' ' << get<2>(x) << '\n';
}
