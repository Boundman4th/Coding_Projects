#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double meter;

    cout << "How many meters do you wish to convert? ";
    cin >> meter;

    const double METER_TO_MILE = .000621371;
    const double METER_TO_FOOT = 3.281;
    const double METER_TO_INCH = 39.37;
    double mile = meter * METER_TO_MILE;
    double foot = meter * METER_TO_FOOT;
    double inch = meter * METER_TO_INCH;

    cout << "The value in Miles is = " << mile << "\n";
    cout << "The value in Feet is = " << foot << "\n";
    cout << "The value in Inches is = " << inch << "\n";

    return 0;    
}