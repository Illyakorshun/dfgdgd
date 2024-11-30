#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    int* p = arr;

    for (int i = 0; i < n; ++i) {
        sum += *p;
        p++;
    }

    cout << "The sum of the elements in the array is: " << sum << endl;

    delete[] arr;

    return 0;
}
