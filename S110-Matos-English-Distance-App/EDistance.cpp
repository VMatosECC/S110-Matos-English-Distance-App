#include "EDistance.h"

//Mutators
void EDistance::setFeet(int fValue)
{
    feet = abs(fValue);
}

void EDistance::setInches(int iValue)
{
    iValue = abs(iValue);
    feet += iValue / 12;
    inches = iValue % 12;
}

//Accessors
int EDistance::getFeet()   { return feet; }
int EDistance::getInches() { return inches; }

//Constructors
//Zero-arguments constructor
EDistance::EDistance()
{
    setFeet(0);
    setInches(0);
}

//All-arguments constructor
EDistance::EDistance(int fValue, int iValue)
{
    setFeet(fValue);
    setInches(iValue);
}

//meter to EDistance
EDistance::EDistance(double m)
{
    double cm = m * 100;
    double totalInches = cm / 2.54;
    setFeet(0);
    setInches(totalInches);
}

//User-Defined methods
string EDistance::toString()
{
    ostringstream sout;
    sout << this << " EDistance [ Feet: " << getFeet()
        << ", Inches: " << getInches()
        << " ]";
    return sout.str();
}

double EDistance::toMeters()
{
    int totalInches = 12 * getFeet() + getInches();
    double cm = totalInches * 2.54;
    return cm / 100;
}

void EDistance::add(EDistance other)
{
    feet += other.getFeet();
    setInches(inches + other.getInches());
}