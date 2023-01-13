#include <bits/stdc++.h>
using namespace std;

class Animals
{
public:
    string colour;
    int age;
    int weight;

    void barks()
    {
        cout << "barking\n";
    }
};

class Humans
{
public:
    string colour;
    int height;
    void talks()
    {
        cout << "Talking\n";
    }
};

class multiple : public Humans, public Animals
{
public:
    void multi()
    {
        cout << "This is Multiple Inheritance\n";
    }
};

int main()
{

    multiple obj;
    obj.barks();
    obj.talks();
    obj.multi();
}