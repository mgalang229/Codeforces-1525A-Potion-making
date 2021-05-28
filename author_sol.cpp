#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		// view the image in this repository for better understanding
		// percentage of magic essence
		int a = k;
		// percentage of water essence
		int b = 100 - k;
		// calculate the GCD (Greatest Common Divisor) of 'a' and 'b'
		int c = __gcd(a, b);
		// divide both 'a' and 'b' by their GCD to get their simplest form
		a /= c;
		b /= c;
		// calculate the sum of 'a' and 'b' (minimum number of steps needed)
		cout << a + b << '\n';
	}
	return 0;
}
