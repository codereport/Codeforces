// code_report
// 

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

using vvc = vector<vector<char>>;

void scatter_fill (vvc& grid, int count, char letter, int row) {
   int col = 0;
   while (count--) {
      grid[row][col] = letter;
      col += 2;
      if (col > 49) row += 2, col = 0;
   }
}

int main () 
{
   int a, b, c, d; 
   cin >> a >> b >> c >> d;
   a--, b--, c--, d--;
   vvc s (48, vi (50));
   
   for (int i = 0; i < 48; i++) {
      char A = [i]() {
         if      (i <  12)           return 'A';
         else if (i >= 12 && i < 24) return 'B';
         else if (i >= 24 && i < 36) return 'C';
         else                        return 'D';
      } ();

      fill (s[i].begin (), s[i].end (), A);
   }
   
   scatter_fill (s, b, 'B', 1);
   scatter_fill (s, c, 'C', 13);
   scatter_fill (s, d, 'D', 25);
   scatter_fill (s, a, 'A', 37);
   
   cout << 48 << " " << 50 << endl;

   for (int i = 0; i < 48; i++) {
      for (int j = 0; j < 50; j++) cout << s[i][j];
      cout << endl;
   }

   return 0;
}
