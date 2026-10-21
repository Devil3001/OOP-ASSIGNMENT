#include <iostream>
using namespace std;
// Swap two parking fees using reference parameters
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Swap two parking fees using pointer parameters
void swapByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
class ParkingSlot
{
    int slotId;
    int fee;
public:
    ParkingSlot(int id, int f)
    {
        slotId = id;
        fee = f;
    }
    void display()
    {
        cout << "Slot ID: " << slotId << ", Fee: Rs. " << fee << endl;
    }
};
int main()
{
    cout << "SMART PARKING MANAGEMENT SYSTEM" << endl;
    // 1. Reference and pointer to a fee variable
    int baseFee = 20;
    int &refFee = baseFee;
    int *ptrFee = &baseFee;
    cout << "Value: " << baseFee << ", ref: " << refFee << ", *ptr: " << *ptrFee << endl;
    cout << "Address: " << &baseFee << ", &ref: " << &refFee << ", ptr: " << ptrFee << endl;
    refFee = 25;
    cout << "After changing through reference: " << baseFee << endl;
    *ptrFee = 30;
    cout << "After changing through pointer: " << baseFee << endl;
    // 2. Swapping two parking fees
    int x, y;
    cout << "Enter two parking fees: ";
    cin >> x >> y;
    swapByReference(x, y);
    cout << "After reference swap: " << x << ", " << y << endl;
    swapByPointer(&x, &y);
    cout << "After pointer swap: " << x << ", " << y << endl;
    // 3. Dynamic memory for a single fee
    int *dynFee = new int(45);
    cout << "Dynamic parking fee: Rs. " << *dynFee << endl;
Practical 4 – OOPs – Page 4
    delete dynFee;
    // 4. Dynamic array of parking fees
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;
    if (n > 0)
    {
        int *fees = new int[n];
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter parking fee of vehicle " << i + 1 << ": ";
            cin >> fees[i];
            total += fees[i];
        }
        cout << "Total Collection = Rs. " << total << endl;
        cout << "Average Fee = Rs. " << (float)total / n << endl;
        delete[] fees;
    }
    // 5. Dynamic ParkingSlot object
    ParkingSlot *slot = new ParkingSlot(101, 60);
    cout << "Dynamic Slot Object: ";
    slot->display();
    delete slot;
    cout << "Memory released successfully." << endl;
    return 0;
}
