#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int h;
	cin >> h;

	if (0 == h) {
		cout << 1;
	}
	else if (1 == h) {
		cout << 0;
	}
	else if (1 == h % 2) {
		cout << 4;
		const auto& ct = (h - 1) / 2;
		for (auto i = 0; i < ct; ++i) {
			cout << 8;
		}
	}
	else {
		const auto& ct = h / 2;
		for (auto i = 0; i < ct; ++i) {
			cout << 8;
		}
	}

	return 0;
}