#include <iostream>
using namespace std;

int main() {
	int comp_digit = 27;
	int user_variant;
	cout << "guess comp digit 0 - 100\n";
	cin >> user_variant;
	while (user_variant != comp_digit) {
		if (user_variant > comp_digit) {
			cout << "No :), try less\n";
			cin >> user_variant;
		}
		else
			cout << "No :), try more\n";
		cin >> user_variant;

	}
	cout << "Congratulations, u guess it's - " << comp_digit;
}