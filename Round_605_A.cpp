// code_report Solution
// Problem Link: https://codeforces.com/contest/1272/problem/A

#include <iostream>
#include <algorithm>
 
auto solve(int x, int y, int z) -> int {
    auto [min, max] = std::minmax({ x, y, z });
    return std::max(0, (max - min) * 2 - 4);
}
 
int main() {
 
    int t; std::cin >> t;
 
    while (t--) {
        int x, y, z; std::cin >> x >> y >> z;
        std::cout << solve(x, y, z) << '\n';
    }
 
    return 0;
}
