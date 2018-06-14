// code_report
// 

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

using vc  = vector<char>;
using vvc = vector<vc>;

void scatter_fill (vvc& grid, int count, char letter, int row) {
   int col = 1;
   while (count--) {
      grid[row][col] = letter;
      col += 2;
      if (col > 49) row += 2, col = 0;
   }
}

template<typename T>
void print (const T& grid) {
   for (const auto& row : grid) {
      for (const auto& e : row) cout << e;
      cout << endl;
   }
}

int main () 
{
   int a, b, c, d; 
   cin >> a >> b >> c >> d;
   vvc s (48, vc (50));
   
   for (int i = 0; i < 48; i++) {
      char A = [i]() {
         if      (i < 12) return 'A';
         else if (i < 24) return 'B';
         else if (i < 36) return 'C';
         else             return 'D';
      } ();

      fill (s[i].begin (), s[i].end (), A);
   }
   
   scatter_fill (s, b - 1, 'B', 1);
   scatter_fill (s, c - 1, 'C', 13);
   scatter_fill (s, d - 1, 'D', 25);
   scatter_fill (s, a - 1, 'A', 37);
   
   cout << 48 << " " << 50 << endl;

   print (s);

   return 0;
}
