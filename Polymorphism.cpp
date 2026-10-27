#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Lion : public Animal
{
public:
    void sound()
    {
        cout << "Lion roars." << endl;
    }
};

class Cow : public Animal
{
public:
    void sound()
    {
        cout << "Cow moos." << endl;
    }
};

int main()
{
    Animal *a;
    Lion l;
    Cow c;

    a = &l;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}
