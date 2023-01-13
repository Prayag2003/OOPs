#include <bits/stdc++.h>
using namespace std;

class Animals
{
public:
    string colour;
    int age;
    int weight;

    void sound()
    {
        cout << "Yes , this animal does make sounds\n";
    }
};

class Dog : public Animals
{

public:
    void barks()
    {
        cout << "I Bark\n";
    }
};

class GermanShrephad : public Dog
{
public:
    void looks()
    {
        cout << "I look like wolves... \n";
    }
};

int main()
{
    Dog d;
    d.sound();
    d.barks();

    GermanShrephad gs;
    cout << gs.age << "\n";
    cout << gs.weight << "\n";
    gs.barks();
    gs.looks();
}