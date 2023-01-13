#include <bits/stdc++.h>
using namespace std;

class human
{
protected:
    int age;
    int height;
    string colour;
};

class male : protected human
{
public:
    int getheight()
    {
        return height;
    }
};

int main()
{
    male m;
    // cout << m.height << "\n";
    cout << m.getheight() << "\n";
}