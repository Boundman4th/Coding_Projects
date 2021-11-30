#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    cout << "What is the length in inches of side A of the triangle? \n";
    int SIDE_A;
    cin >> SIDE_A;

    cout << "What is the length in inches of side B of the triangle? \n";
    int SIDE_B;
    cin >> SIDE_B;

    cout << "What is the angle between those two sides? \n";
    int ANGLE;
    cin >> ANGLE;

    int SIDE_C = sqrt(((SIDE_A * SIDE_A) + (SIDE_B * SIDE_B)) - ((2 * SIDE_A * SIDE_B)* cos(ANGLE)));

    cout << "The third side is " << SIDE_C << " inches. \n";

    return 0;

}