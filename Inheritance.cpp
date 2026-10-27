#include <iostream>
using namespace std;

// Single Inheritance
class Person {
public:
    void displayPerson() {
        cout << "I am a person." << endl;
    }
};

class Student : public Person {
public:
    void displayStudent() {
        cout << "I am a student." << endl;
    }
};

// Multiple Inheritance
class Father {
public:
    void showFather() {
        cout << "I am the father." << endl;
    }
};

class Mother {
public:
    void showMother() {
        cout << "I am the mother." << endl;
    }
};

class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "I am the child." << endl;
    }
};

// Multilevel Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy makes a sound." << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Student s;
    s.displayPerson();
    s.displayStudent();

    cout << "\nMultiple Inheritance:" << endl;
    Child c;
    c.showFather();
    c.showMother();
    c.showChild();

    cout << "\nMultilevel Inheritance:" << endl;
    Puppy p;
    p.eat();
    p.bark();
    p.weep();

    return 0;
}
