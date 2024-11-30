#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	int* ptr1 = &a;
	int* ptr2 = &b;

	int rev = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = rev;

	cout << "swappin: " << a << " " << b << endl;

	return 0;
}