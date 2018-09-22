// code_report Solution
// https://youtu.be/vcF8mTjgt6o

#include <iostream>

using namespace std;
using ll = long long;

int main () {
   ll l, r;
   cin >> l >> r;
   cout << "YES" << endl; 
   for (ll i = l; i < r + 1; i += 2)
      cout << i << ' ' << i + 1 << endl;
   return 0;
}
