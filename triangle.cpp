#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main ()

{

    cout << "How long is the first side of the triangle?";
    int leg1;
    cin >> leg1; 

    cout << "How long is the second side of the triangle?";
    int leg2;
    cin >> leg2;

    int leg3 = (pow(leg1, 2) + pow(leg2, 2)); //side 1 squared + side 2 squared = side 3  squared (hypotenuse)
    double total = sqrt(leg3); 

    cout << "Hypotenuse = " << total << "\n"; 

    return 0;
}