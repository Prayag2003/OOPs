#include <bits/stdc++.h>
using namespace std;

class Animal
{
    string name;

public:
    int speed;
    int height;
    // Non - Parameterized Constructor

    Animal()
    {
        cout << "Construtor is always invoked at the time of creation of an object "
             << "\n";
        cout << "It can be DEFAULT , NON-Para or PARAmeterized constructor"
             << "\n";
        cout << "This is Non-Parameterized Constructor.."
             << "\n";
    }

    // Parameterized Constructor ...
    Animal(int height)
    {
        // this keyword is used when input parameter is same as the data member
        cout << "This is a parameterized constructor ... "
             << "\n";
        this->height = height;
        cout << "this is a pointer , lets see its address " << this << "\n";
    }

    Animal(int height, int speed)
    {
        this->height = height;
        this->speed = speed;
        cout << this << "\n";
    }
};

int main()
{
    Animal lion;
    Animal *tiger = new Animal(20, 23);
    cout << "Address of Tiger ( curr obj ) : " << tiger << "\n";
    // Proves that this and current object has same address .... thus "this" points to address of the current address
    cout << "Height of Tiger is " << tiger->height << "\n";
    cout << "Speed of  Tiger is " << tiger->speed << "\n";
}