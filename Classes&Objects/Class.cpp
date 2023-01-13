#include <bits/stdc++.h>
#include "Hero.cpp"
using namespace std;

class Heroo
{
public:
    int healthy;
    char levell;
};

class Student
{

    int age;
    string name;
    int marks;

    // Getter Setter Method Improves Security of the CODE , Data Protection
public:
    //  G E T T E R  ( KEEP Data TYPES )
    int getMarks()
    {
        return marks;
    }
    int getAge()
    {
        return age;
    }

    // S E T T E R ( USE VOID )
    void setMarks(int m)
    {
        marks = m;
    }
    void setAge(int a)
    {
        age = a;
    }
};

int main()
{
    // instantiation of an Object named Prayag ...
    // Creating a Hero type variable
    // Hero Prayag;
    Heroo Prayag;
    cout << sizeof(Prayag) << "\n";
    // By Default the Access Modifier is PRIVATE ...
    cout << Prayag.healthy << "\n";

    Student a;
    a.setMarks(100);
    a.setAge(10);
    cout << "Marks of a is " << a.getMarks() << "\n";
    cout << "Age of a is " << a.getAge() << "\n";
}