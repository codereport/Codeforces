// code_report Solution
// Video Link: https://youtu.be/082mInmBC8Q
// Problem Link: https://codeforces.com/contest/1111/problem/A

#include <iostream>
#include <numeric>
#include <string>

using namespace std;

bool is_vowel(char c) {
   return c == 'a' || c == 'e' || c == 'i' || 
          c == 'o' || c == 'u';
}

bool superhero_transformed(string const& a, string const& b) {
   return a.size() == b.size() && 
      // would like to use C++17 transform_reduce here but not implemented yet
      inner_product(cbegin(a), cend(a), cbegin(b), true,
         std::logical_and{},
         [&](auto a, auto b) { return is_vowel(a) == is_vowel(b); });
}

int main() {
   string a, b;
   cin >> a >> b;
   cout << (superhero_transformed(a, b) ? "Yes\n" : "\No");
   return 0;
}
