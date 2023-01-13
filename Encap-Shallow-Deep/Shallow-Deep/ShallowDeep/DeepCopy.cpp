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
    // // Para const
    // vehicle(int speed, string model)
    // {
    //     this->speed = speed;
    //     this->model = model;
    //     // this->name = name;
    // }

    void print()
    {
        cout << "[ Name: " << this->name << " ";
        cout << " Speed : " << this->speed << " ";
        cout << " model : " << this->model << "] \n";
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Copy Constructor
    vehicle(vehicle &temp)
    {
        // +1 for Null charachter
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->model = temp.model;
        this->speed = temp.speed;
    }
};

int main()
{

    vehicle car1;
    car1.speed = 100;
    car1.model = "i20";
    char name[6] = "Bhatt";
    car1.setName(name);
    car1.print();

    // creating car using DEFAULT CC
    // vehicle car2(car1);
    vehicle car2 = car1;
    car2.print();

    // will change in name of car1 affect name of car2 ??
    // OfCourse NO , since USER DEFINED Copy Constructor makes DEEp COPY (both Objects share seperate memory) of the name...

    car1.name[0] = 'G';
    car1.print();
    car2.print();
}