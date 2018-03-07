// code_report Solution
// https://youtu.be/tzF_nagpR5A


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string meet_in_what_round (int n, int a, int b) {

	if (a > b) swap (a, b);

	int divisions = 0, total = 0;
	while (pow (2, total) != n) total++;

	n /= 2;

	while (a > n || b <= n) {

		if (b > n) {
			a -= n;
			b -= n;
		}

		n /= 2;

		divisions++;
	}

	return (divisions == 0 ? "Final!" : to_string (total - divisions));
}

int main () {

	int n, a, b; cin >> n >> a >> b;

	cout << meet_in_what_round (n, a, b) << endl;

 	return 0;
}
