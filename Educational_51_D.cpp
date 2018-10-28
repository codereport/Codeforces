// code_report Solution
// https://youtu.be/lSyQQ1T6iQ8

#include <iostream>

using namespace std;

using ll = long long;

const int MOD = 998244353;
ll dp[1005][2005][4];

int main() {
   int n, k; cin >> n >> k;
   dp[1][1][0] = 1; // WW
   dp[1][2][1] = 1; // WB
   dp[1][2][2] = 1; // BW
   dp[1][1][3] = 1; // BB
   for (int i = 2; i <= n; ++i) {
      for (int j = 1; j <= i * 2; ++j) {
         dp[i][j][0] = (dp[i - 1][j    ][0] + dp[i - 1][j    ][1] + dp[i - 1][j    ][2] + dp[i - 1][j - 1][3]) % MOD;
         dp[i][j][1] = (dp[i - 1][j - 1][0] + dp[i - 1][j    ][1] + dp[i - 1][j - 2][2] + dp[i - 1][j - 1][3]) % MOD;
         dp[i][j][2] = (dp[i - 1][j - 1][0] + dp[i - 1][j - 2][1] + dp[i - 1][j    ][2] + dp[i - 1][j - 1][3]) % MOD;
         dp[i][j][3] = (dp[i - 1][j - 1][0] + dp[i - 1][j    ][1] + dp[i - 1][j    ][2] + dp[i - 1][j    ][3]) % MOD;
      }
   }
   cout << (dp[n][k][0] + dp[n][k][1] + dp[n][k][2] + dp[n][k][3]) % MOD << endl;

   return 0;
}
