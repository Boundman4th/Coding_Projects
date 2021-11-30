#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    cout << "What is the width of the rectangle? \n";
    int width;
    cin >> width;

    cout << "What is the length of the rectangle? \n";
    int length;
    cin >> length;

    const double AREA = width * length;
    const double HYPOTENUSE = sqrt((width*width) + (length * length));

    cout << "The area of the rectangle is = " << AREA << "\n";
    cout << "The diagonal of the rectangle is = " << HYPOTENUSE << "\n";

    return 0;
}