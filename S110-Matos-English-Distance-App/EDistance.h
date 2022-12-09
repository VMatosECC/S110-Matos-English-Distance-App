//DUAL COMPILATION UNIT style
//---------------------------------------------------------
#pragma once
#include <sstream>
#include <string>
using namespace std;

class EDistance
{
private:
    //data members
    int feet;
    int inches;

public:
    //Mutators
    void setFeet(int fValue);
    void setInches(int iValue);

    //Accessors
    int  getFeet();
    int  getInches();

    //Constructors
    EDistance();                        //Zero-arguments
    EDistance(int fValue, int iValue);  //All-arguments
    EDistance(double m);                //meters to EDistance

    //User-defined methods
    string toString();                  //Talk about yourself
    void   add(EDistance other);        //Add to me the other distance
    double toMeters();                  //Convert to meters
};


