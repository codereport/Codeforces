// code_report Solution
// https://youtu.be/YuBz1keibrM

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

#define FORI(s,n) for(int i = s; i < n; i++)

using ll = long long;

// a - strength
// b - arrows
// c - running sum of arrows
// d - arrows so far
// e - sum (strength)

void warriors_standing (const vector<ll>& a, const vector<ll>& b)
{
   vector<ll> c (a.size ());
   partial_sum (a.begin (), a.end (), c.begin ());

   ll d = 0;

   for (auto arrows : b)
   {
      d += arrows;
      if (d >= c.back ()) d = 0;

      auto it = lower_bound (c.begin (), c.end (), d);
      cout << distance (it, c.end ()) - (*it == d) << endl;
   }
}

int main ()
{
   int n, q; cin >> n >> q;
   vector<ll> a (n), b (q);

   FORI (0, n) cin >> a[i];
   FORI (0, q) cin >> b[i];

   warriors_standing (a, b);

   return 0;
}
