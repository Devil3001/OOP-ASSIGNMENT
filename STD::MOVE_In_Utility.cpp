
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, C++ Programming";

    cout << "Before Move:" << endl;
    cout << "str1 = " << str1 << endl;

    string str2;
    str2.swap(str1);

    cout << "\nAfter Move:" << endl;
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    return 0;
}
