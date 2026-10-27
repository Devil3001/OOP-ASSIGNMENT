
#include <iostream>
using namespace std;

int main() {
    int a = 13;
    double b = a;

    cout << "Implicit Type Casting:" << endl;
    cout << "Integer value = " << a << endl;
    cout << "Double value = " << b << endl;

    double x = 73.86;
    int y = (int)x;

    cout << "\nExplicit Type Casting:" << endl;
    cout << "Double value = " << x << endl;
    cout << "Integer value = " << y << endl;

    int num = 203;
    double result = static_cast<double>(num);

    cout << "\nUsing static_cast:" << endl;
    cout << "Integer value = " << num << endl;
    cout << "Double value = " << result << endl;

    return 0;
}
