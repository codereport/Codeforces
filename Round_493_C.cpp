// code_report Solution
// https://youtu.be/A33vNPH02FA

#include <algorithm>
#include <iostream>
#include <string> 

using namespace std;

int main () {

   long long n, x, y; cin >> n >> x >> y;
   string s; cin >> s;
   s.erase (unique (s.begin (), s.end ()), s.end ());
   auto c = count (s.begin (), s.end (), '0');
   cout << max (0LL, min ((c-1)*x + y, c*y)) << endl;

   return 0;
}
