#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    cout << "\nOriginal elements: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    sort(numbers.begin(), numbers.end());

    cout << "\nSorted elements (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    reverse(numbers.begin(), numbers.end());

    cout << "\nReversed elements (descending): ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
