
#include "ArrayTemp.h"
#include"ArrayTemp.cpp"

int main()
{
    try
    {
        ArrayTemp<int> myMass(1);
        cout << myMass;
        myMass.Insert(1, 0);
        myMass.Insert(2, 1);
        myMass.Insert(3, 2);
        cout << myMass;

        cout << myMass.Remove(2) << endl;
        cout << myMass;
    }
    catch (exception& exp)
    {
        cout << exp.what() << endl;
    }
}

