#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    // Constructor
    Student()
    {
        cout<<"Hello Student ! \n";
        cout << "Constructor called." << endl;
    }

    // User-defined function to input data
    void inputData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // User-defined function to display data
    void displayData()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor called." << endl;
    }
};

int main()
{
    Student s1;

    s1.inputData();
    s1.displayData();

    return 0;
}
