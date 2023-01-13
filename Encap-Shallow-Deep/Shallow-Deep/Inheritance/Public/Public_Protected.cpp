#include <bits/stdc++.h>
using namespace std;

// PROTECTED behaves same as PRIVATE
// It cannot be accessed anywhere but only in IT'S OWN CLASS and its CHILD CLASS
// Can be accessed in MAIN Class by using getter in Child Class....

class human
{
public:
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
    void setHeight(int h)
    {
        this->height = h;
    }
};

int main()
{
    male m;
    // will show error cause  it is inaccessible , using a getter in the child class will get the job done
    // cout << m.height << "\n";

    m.setHeight(180);
    cout << m.getheight() << "\n";
}