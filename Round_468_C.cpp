// code_report Solution
// https://youtu.be/hEsuRDgmo_8

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

void lab_work (int n, const vector<int>& measures) 
{
	auto [mi, ma] = minmax_element (measures.begin (), measures.end ());

	if ((*ma - *mi) < 2) // case 1 and 2
	{
		cout << n << endl;
		for (int i = 0; i < n; i++) cout << measures[i] << ' ';
		cout << endl;
	}
	else // case 3
	{
		int avg = (*mi + *ma) / 2;

		int a = count (measures.begin (), measures.end (), avg - 1);
		int b = count (measures.begin (), measures.end (), avg);
		int c = n - a - b;

		int t = max (b / 2, min (a, c));

		if (t == min (a, c)) a -= t, c -= t, b += 2 * t;
		else				 a += t, c += t, b -= 2 * t;

		cout << n - 2 * t << endl;
		for (int i = 0; i < n; i++) cout << avg + (i < a ? -1 : i < a + b ? 0 : 1) << ' ';
		cout << endl;
	}
}

int main ()
{
	int n; cin >> n;
	vector<int> measures (n);
	for (int i = 0; i < n; i++) cin >> measures[i];

	lab_work (n, measures);

	return 0;
}
