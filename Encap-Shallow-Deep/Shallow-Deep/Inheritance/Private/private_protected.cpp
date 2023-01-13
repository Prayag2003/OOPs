#include <bits/stdc++.h>
using namespace std;

// INACCESSIBLE IN ALL CASES ....
//
class human
{
private:
    int age;
    int height;
    string colour;

public:
    int getheight()
    {
        return height;
    }
};

class male : protected human
{
public:
    int getheight()
    {
        return 2;
    }
};

int main()
{
    male m;
    cout << m.getheight() << "\n";
}