
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T multiply()
    {
        return a * b;
    }

    void display()
    {
        cout << "Addition = " << add() << endl;
        cout << "Multiplication = " << multiply() << endl;
    }
};

int main()
{
    Calculator<int> c1(10, 5);
    cout << "Integer Calculator:" << endl;
    c1.display();

    Calculator<double> c2(2.5, 1.5);
    cout << "\nDouble Calculator:" << endl;
    c2.display();

    return 0;
}
