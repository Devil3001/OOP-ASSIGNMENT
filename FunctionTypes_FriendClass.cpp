
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

    static int count;

public:
    // Default constructor
    Student()
    {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;
        count++;
    }

    // Parameterized constructor
    Student(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
        count++;
    }

    // Inline function
    inline void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }

    // Member function using this pointer
    void setData(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // Static member function
    static void showCount()
    {
        cout << "\nTotal Student Objects Created: "
             << count << endl;
    }

    // Friend class declaration
    friend class StudentDetails;
};

// Definition of static data member
int Student::count = 0;

// Friend class
class StudentDetails
{
public:
    void showDetails(Student s)
    {
        cout << "\n--- Student Details (Friend Class) ---";
        cout << "\nRoll Number: " << s.rollNo;
        cout << "\nName: " << s.name;
        cout << "\nMarks: " << s.marks << endl;
    }

    void updateMarks(Student &s, float newMarks)
    {
        s.marks = newMarks;
        cout << "\nMarks updated successfully!" << endl;
    }
};

int main()
{
    Student s;
    StudentDetails details;

    int choice;
    int roll;
    string name;
    float marks;

    do
    {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========";
        cout << "\n1. Enter Student Details";
        cout << "\n2. Display Student Details";
        cout << "\n3. Update Student Marks (Friend Class)";
        cout << "\n4. Display Details Using Friend Class";
        cout << "\n5. Display Total Objects Created";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> roll;

            cout << "Enter Name: ";
            getline(cin >> ws, name);

            cout << "Enter Marks: ";
            cin >> marks;

            s.setData(roll, name, marks);

            cout << "\nStudent details entered successfully!";
            break;

        case 2:
            cout << "\n--- Student Details ---";
            s.display();
            break;

        case 3:
            cout << "\nEnter New Marks: ";
            cin >> marks;

            if (marks >= 0 && marks <= 100)
                details.updateMarks(s, marks);
            else
                cout << "\nInvalid marks! Enter marks between 0 and 100.";
            break;

        case 4:
            details.showDetails(s);
            break;

        case 5:
            Student::showCount();
            break;

        case 6:
            cout << "\nExiting program. Thank you!";
            break;

        default:
            cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 6);

    return 0;
}
