#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void fun()
    {
        cout << "You are Inside Parent Class\n";
    }
};

class Child : public Parent
{
public:
    void fun()
    {
        cout << "You are Inside Derived Class\n";
    }
};

int main()
{

    Child c;
    c.fun();
}