#include <iostream>
using namespace std;

class ParkingBill
{
    float amount;

public:
    // Default constructor
    ParkingBill()
    {
        amount = 0;
    }

    // Parameterized constructor
    ParkingBill(float a)
    {
        amount = a;
    }

    // Overloaded + operator
    ParkingBill operator+(ParkingBill b)
    {
        ParkingBill temp;
        temp.amount = amount + b.amount;
        return temp;
    }

    void display()
    {
        cout << "Parking Fee Amount = Rs. " << amount << endl;
    }
};

int main()
{
    float a, b;

    cout << "Enter parking fee for Vehicle 1: ";
    cin >> a;
    cout << "Enter parking fee for Vehicle 2: ";
    cin >> b;

    ParkingBill v1(a), v2(b), total;

    total = v1 + v2;

    cout << endl;
    cout << "Vehicle 1: ";
    v1.display();
    cout << "Vehicle 2: ";
    v2.display();
    cout << "Total Parking Fee: ";
    total.display();

    return 0;
}
