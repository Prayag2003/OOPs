#include <bits/stdc++.h>
using namespace std;
class plants
{
public:
    int height;
    string colour;
    // static keyword
    static int width;

    // Static Function
    static int random()
    {
        return width;
    }
};

int plants ::width = 100;
int main()
{

    cout << plants::random() << "\n";
    plants p;
    cout << p.random() << "\n";
}