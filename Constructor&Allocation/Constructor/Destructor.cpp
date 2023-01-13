#include <bits/stdc++.h>
using namespace std;

class Veges
{

public:
    string flavour;
    string colour;
    int PH;

    string getflavour()
    {
        return flavour;
    }
    string getcolour()
    {
        return colour;
    }
    int getPH()
    {
        return PH;
    }

    void setflavour(string flavour)
    {
        this->flavour = flavour;
    }
    void setColour(string col)
    {
        colour = col;
    }

    void setPH(int p)
    {
        PH = p;
    }

    // // Parameterized Constructor
    // Veges(string flavour, string colour, int PH)
    // {
    //     this->flavour = flavour;
    //     this->colour = colour;
    //     this->PH = PH;
    // }

    // // Copy Constructor
    // Veges(Veges &f)
    // {
    //     this->flavour = f.flavour;
    //     this->colour = f.colour;
    //     this->PH = f.PH;
    // }

    // To avoid confusion with the Constructor we use ~ ( Tilda Sign )
    ~Veges()
    {
        cout << "Destructor called \n";
    }
};

int main()
{
    // Statically Allocated
    Veges carrot;
    Veges tomato;

    // Dynamically Allocated
    Veges *v = new Veges();
    delete v;
}
