// code_report Solution
// Video Link:
// Problem Link: https://codeforces.com/contest/1265/problem/A

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

template <typename I, typename O, typename MapOp>
void transform3(I f, I l, O o, MapOp mapOp) {
    if (f == l) return;
    if (std::distance(f, l) == 1) {
        *o++ = mapOp('-', *f++, '-');
        return;
    }
    *o++ = mapOp('-', *f, *std::next(f));
    while(std::distance(++f, l) > 1)
        *o++ = mapOp(*std::prev(f), *f, *std::next(f));
    *o++ = mapOp(*std::prev(f), *f, '-');
}

auto solve(std::string s) -> std::string {
    
    transform3(
        std::cbegin(s),
        std::cend(s),
        std::begin(s),
        [](auto prev, auto curr, auto next) {
            if (curr != '?')                return curr;
            if (prev != 'a' && next != 'a') return 'a';
            if (prev != 'b' && next != 'b') return 'b';
            return 'c'; });
    
    auto it = std::adjacent_find(
        std::cbegin(s), 
        std::cend(s));

    return it != std::cend(s) ? "-1" : s;
}

int main() {

    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        cout << solve(s) << '\n';
    }

    return 0;
}
