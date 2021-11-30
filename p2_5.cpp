#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    cout << "What is the Radius? \n";
    double radius;
    cin >> radius;

    const double PI = 3.14;
    const double AREA = PI * radius * radius;
    const double CIRCUMFERENCE = 2 * PI * radius;
    const double VOLUME = (4 / 3) * PI * pow (radius, 3);
    const double SURFACE_AREA = 4 * PI * radius * radius;

    cout << "The area of the circle is = " << AREA << "\n";
    cout << "The circumference of the circle is = " << CIRCUMFERENCE << "\n";
    cout << "The volume of the sphere is = " << VOLUME << "\n";
    cout << "The surface area of the sphere is = " << SURFACE_AREA << "\n";

    return 0;

}