#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int property;

    int operator + (A &obj)
    {
        int val1 = this->property;
        int val2 = obj.property;
        return val2 - val1;
    }

    void operator()()
    {
        cout << "Bracket is being overloaded";
    }
};

int main()
{
    A obj1, obj2;
    obj1.property = 10;
    obj2.property = 5;
    cout << obj1 + obj2 << "\n";
    obj2();
}