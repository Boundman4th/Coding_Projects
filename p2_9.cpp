#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    cout << "What is the amount due? \n";
    double due;
    cin >> due;

    cout << "What is the amount recieved? \n";
    double recieved;
    cin >> recieved;

    int pennies = (recieved - due) * 100.05; //change
    const double DOLLAR = 100;
    const double QUARTER = 25;
    const double DIME = 10;
    const double NICKEL = 5;

    cout << "Your change is = " << pennies / DOLLAR; 

    return 0;

}