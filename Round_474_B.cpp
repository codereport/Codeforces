// code_report Solution
// 

#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main () 
{
    int n, x, y; cin >> n >> x >> y;
    vector<long long> a (n), b (n);
    multiset<long long> s;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) s.insert (abs (a[i] - b[i]));

    int z = x + y;

    while (z--) {
        auto it = --s.end ();
        s.insert (abs (*it - 1));
        s.erase (it);
    }

    auto square = [](auto i, auto j) { return i + j * j; };
    cout << accumulate (s.begin (), s.end (), 0LL, square) << endl;

    return 0;
}
