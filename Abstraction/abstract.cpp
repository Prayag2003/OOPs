#include <bits/stdc++.h>
using namespace std;

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
    A a;
    a.getab();
}