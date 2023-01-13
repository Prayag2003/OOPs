#include <bits/stdc++.h>
using namespace std;

// PRIVATE  is inaccessible everywhere except in it's own class

class human
{
public:
    int age;
    int height;
    string colour;
};

class male : private human
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