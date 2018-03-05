// code_report Solution
// https://youtu.be/bFEmX3y8idE

#include <algorithm>
#include <iostream>

using namespace std;

int main () {

	int a, b; cin >> a >> b;

	int x = abs (b - a);
	int y = x % 2 != 0;
	x /= 2;

	cout << (x + y) * (x + 1) << endl;

	return 0;
}
