// code_report
// https://youtu.be/BLnY8UrSR_o

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void print (const T& grid) {
   cout << grid.size () << " " << grid[0].size () << endl;
   for (const auto& row : grid) {
      for (const auto& e : row) cout << e;
      cout << endl;
   }
}

void scatter_fill (vector<vector<char>>& grid, int count, char letter, int row) {
   int col = 1;
   while (count--) {
      grid[row][col] = letter;
      col += 2;
      if (col > 49) row += 2, col = 0;
   }
}

auto initial_grid ()
{
   const char flowers[] = { 'A', 'B', 'C', 'D' };

   vector<vector<char>> grid (48, vector<char> (50));

   for (int i = 0; i < 4; ++i) {
      for (int j = i * 12; j < (i + 1) * 12; ++j) {
         fill (grid[j].begin (), grid[j].end (), flowers[i]);
      }
   }

   return grid;
}

void construct_flower_woods (int a, int b, int c, int d)
{
   auto grid = initial_grid ();

   scatter_fill (grid, b - 1, 'B', 1);
   scatter_fill (grid, c - 1, 'C', 13);
   scatter_fill (grid, d - 1, 'D', 25);
   scatter_fill (grid, a - 1, 'A', 37);

   print (grid);
}

int main ()
{
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   construct_flower_woods (a, b, c, d);

   return 0;
}
