#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    int speed;
    string model;
    char *name;

    vehicle()
    {
        // dynamically creating a char array
        name = new char[100];
    }
    void print()
    {
        cout << "[ Name: " << this->name << " ";
        cout << " Speed : " << this->speed << " ";
        cout << " model : " << this->model << "] \n";
    }

    void setname(char name[])
    {
        this->name = name;
    }
};

int main()
{
    cout << "\nBefore Copying\n";
    vehicle car1;
    car1.model = "i20";
    car1.speed = 150;
    char name[7] = "Maruti";
    car1.setname(name);

    vehicle car2;
    car2.model = "i30";
    car2.speed = 200;
    char name2[7] = "Suzuki";
    car2.setname(name2);

    car1.print();
    car2.print();

    cout << "\nAfter Copying\n\n";

    car1 = car2;

    car1.print();
    car2.print();

    cout << "\n";
}