#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    Student()
    {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;
    }

    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        marks = s.marks;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void updateMarks(float m)
    {
        marks = m;
    }
};

int main()
{
    Student s1;
    Student s2(101, "Amit", 85.5);
    Student s3(s2);

    cout << "Default Constructor:" << endl;
    s1.display();

    cout << "\nParameterized Constructor:" << endl;
    s2.display();

    cout << "\nCopy Constructor:" << endl;
    s3.display();

    cout << "\nUpdating marks of copied student..." << endl;
    s3.updateMarks(92.0);
    s3.display();

    return 0;
}
