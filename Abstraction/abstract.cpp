#include <bits/stdc++.h>
using namespace std;

// Abstraction == Implementation Hiding

// End User is not provided with the internal implementations of how the BackEnd of Process works

// displaying only the necessary details to the user while hiding other info

class A
{
private:
    int a;
    int b;

public:
    void getab()
    {
        cout << a << "  " << b << "\n";
    }
};

int main()
{
    A obj;
    obj.getab();
}