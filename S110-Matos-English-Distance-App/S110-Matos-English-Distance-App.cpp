// S110-Matos-English-Distance-App.cpp 

#include <iostream>
#include "EDistance.h"
using namespace std;

int main()
{
    EDistance d1;
    cout << "feet " << d1.getFeet() << ", inches " << d1.getInches() << endl;

    d1.setFeet(2);
    d1.setInches(8);
    cout << d1.toString() << endl;

    EDistance d2(3, 7);
    cout << d2.toString() << endl;

    d1.add(d2);
    cout << d1.toString() << endl;

    cout << "d1 in Meters is " << d1.toMeters() << endl;

    EDistance d3(2.0);
    cout << d3.toString() << endl;
}

