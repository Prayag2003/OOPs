#include <bits/stdc++.h>
using namespace std;
class plants
{
public:
    int height;
    string colour;
    // static keyword
    static int width;
};

int plants ::width = 10;
int main()
{
    cout << plants ::width << "\n";

    plants p, j;
    cout << p.width << "\n";
    cout << j.width << "\n";

    j.width = 4;
    cout << p.width << "\n";
}