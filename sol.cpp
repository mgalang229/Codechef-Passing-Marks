#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a_min, b_min, c_min, t_min, a, b, c;
		cin >> a_min >> b_min >> c_min >> t_min >> a >> b >> c;
		// just follow the conditions in the problem statement
		if (a >= a_min && b >= b_min && c >= c_min && a + b + c >= t_min) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
