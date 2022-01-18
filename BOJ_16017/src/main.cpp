#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((8 == a || 9 == a) &&
		b == c &&
		(8 == d || 9 == d)) {
		cout << "ignore";
	}
	else {
		cout << "answer";
	}

	return 0;
}