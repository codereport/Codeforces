// code_report Solution
// https://youtu.be/y4LVJjSd1oI

#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>

using namespace std;

using vi = vector<int>;
#define FORI(s,n) for(int i = s; i < n; i++)

void compress_songs (const vi& a, const vi& b, int n, int m) 
{
   vi diff (n);
   FORI (0, n) diff[i] = b[i] - a[i];
   auto total = accumulate (a.begin (), a.end (), 0LL);
   sort (diff.begin (), diff.end ());
   int i = 0;
   while (total > m && i < n) total += diff[i], ++i;
   cout << (total <= m ? i : -1) << endl;
}

int main ()
{
   int n, m;
   long long total = 0;
   cin >> n >> m;
   vi A (n), B (n);
   FORI (0, n) {
      int a, b; 
      cin >> a >> b;
      A[i] = a, B[i] = b;
   }

   compress_songs (A, B, n, m);

   return 0;
}
