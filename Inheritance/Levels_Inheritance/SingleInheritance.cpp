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

int main()
{
    Dog d;
    d.sound();
    d.barks();
}