#include<bits/stdc++.h>
using namespace std;
class Person
{
    int age;
    string name;
    string hobby;

    public:
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setHobby(string h)
    {
        hobby = h;
    }
    string getHobby()
    {
        return hobby;
    }
};

int main()
{
    // creating an object dynamically
    Person *PRAYAG = new Person;

    //  *  or -> operator can be used ... 
    PRAYAG->setAge(20);
    cout << "Prayag's Age is " << (*PRAYAG).getAge() << "\n"; 
    
    // setting Prayag's Hobby ... 
    PRAYAG->setHobby("Painting");
    cout << "His Hobby is " << PRAYAG->getHobby() << "\n";
    
    
}

