#include <bits/stdc++.h>
using namespace std;

// D E F A U L T     A R G U M E N T S

// When the user provides all the arguments of the function the Default Args provided are overridden

class A
{
public:
    int add(int a, int b, int c = 0, int d = 0)
    {
        return a + b + c + d;
    }
};

int main()
{
    A obj;
    cout << obj.add(20, 30) << "\n";
    cout << obj.add(20, 30, 40) << "\n";
    cout << obj.add(20, 30, 40, 50) << "\n";
}