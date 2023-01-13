#include <bits/stdc++.h>
using namespace std;

// To Resolve INHERITANCE AMBIGUITY , use :: (Scope Resolution Operator)

class A
{
public:
    void print()
    {
        cout << "I am Class A\n";
    }
};

class B
{
public:
    void print()
    {
        cout << "I am Class B\n";
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    obj.A::print();
    obj.B::print();
}