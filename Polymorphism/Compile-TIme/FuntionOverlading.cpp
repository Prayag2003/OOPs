#include <bits/stdc++.h>
using namespace std;

//  C O M P I L E  --- T I M E --- P O L Y M O R P H I S M

// Function Overloading can be achieved only by 2 methods:

// 1 ) Functions having same names:- Having same number of arguments , but of different data types
// 2 ) Functions having same names:- Having different number of arguments

class A
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(int a, int b, int c)
    {
        return a + b;
    }
    string add(string a, string b)
    {
        string s = a + b;
        return s;
    }
};

int main()
{
    A obj;
    cout << obj.add(20, 40) << "\n";
    cout << obj.add("Prayag", " ");
}