#include <bits/stdc++.h>
using namespace std;
class human
{
public:
    int height;
    int age;
    string colour;

    void setAge(int a)
    {
        this->age = a;
    }
    void setHeight(int a)
    {
        this->height = a;
    }
    void setColour(string a)
    {
        this->colour = a;
    }
};

class male : public human
{

public:
    bool isHandsome;
};

int main()
{
    male obj;
    obj.setAge(20);
    obj.setHeight(180);
    obj.setColour("Black");
    cout << obj.age << "\n";
    cout << obj.height << "\n";
    cout << obj.colour << "\n";
    cout << obj.isHandsome << "\n";
    // cout << obj. << "\n";
}