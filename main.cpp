#include <iostream>

using namespace std;

int main() {
	int num1;
	int num2;
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	int ma = *ptr1 > *ptr2 ? *ptr1 : *ptr2;

	cout << "The maximum number is: " << ma << endl;

	return 0;
}