#include <iostream>

using namespace std;

int main() {
	int num1;
	int num2;
	char zn;

	cout << "Enter a number: ";
	cin >> num1;

	cout << "Enter a number: ";
	cin >> num2;

	cout << "Enter a simbol: ";
	cin >> zn;


	
	if (zn == '+') {
		cout << num1 + num2 << endl;
	}
	else if (zn == '-') {
		cout << num1 - num2 << endl;
	}
	else if (zn == '*') {
		cout << num1 * num2 << endl;
	}
	else if (zn == '/') {
		cout << num1 / num2 << endl;
	}
	else {
		cout << "Error" << endl;
	}



	return 0;
}