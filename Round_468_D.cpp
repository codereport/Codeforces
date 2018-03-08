// code_report Solution
// https://youtu.be/aqVF3vpiERE

#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

using vi  = vector<int>;
using vvi = vector<vi>;

void dfs (const vvi& al, vi& ac, int a, int depth) {
	ac[depth]++;
	for (int u : al[a]) dfs (al, ac, u, depth + 1);
}

int main () {

	int n; cin >> n;

	vvi al (n + 1); // adjacency list
	vi  ac (n + 1); // apple count (at depth / height i)

	for (int i = 2; i <= n; ++i) {
		int a; cin >> a;
		al[a].push_back (i);
	}

	dfs (al, ac, 1, 1);

	auto mod2 = [] (int x, int i) { return x + i % 2; };
	cout << accumulate (ac.begin (), ac.end (), 0, mod2) << endl;

	return 0;
}
