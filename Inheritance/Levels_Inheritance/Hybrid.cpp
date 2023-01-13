#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout << "Inside Function 1\n";
    }
};

class B : public A
{
public:
    void fun2()
    {
        cout << "Inside Function 2\n";
    }
};

class D
{
public:
    void fun4()
    {
        cout << "Inside Function 4\n";
    }
};

class C : public A, public D
{
public:
    void fun3()
    {
        cout << "Inside Function 3\n";
    }
};

int main()
{
    cout << "This is Hybrid Inheritance\n";
    cout << "A            D        \n";
    cout << "  /   \\        /          \n";
    cout << " /     \\      /           \n";
    cout << " \\/       \\ \\ /          \n";
    cout << " B           C              \n";
    C obj;
    obj.fun1();
    obj.fun3();
    obj.fun4();

    B ob;
    ob.fun1();
    ob.fun2();

    A oba;
    oba.fun1();
}