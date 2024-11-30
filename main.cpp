#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;

	int* ptr = &number;

	if (*ptr > 0) {
		cout << "The number is positive." << endl;
	}
	else if (*ptr < 0) {
		cout << "The number is negative." << endl;
	}
	else {
		cout << "The number is zero." << endl;
	}

	return 0;
}