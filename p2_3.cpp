#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    cout << "This program will give you the sum, difference, product, average, distance, maximum and minimum of two numbers \n";
    
    cout << "What is your first number? \n";
    int n1;
    cin >> n1;

    cout << "What is your second number? \n";
    int n2;
    cin >> n2;

    cout << "Sum = " << n1 + n2 << "\n";
    cout << "Difference = " << n1 - n2 << "\n";
    cout << "Product = " << n1 * n2 << "\n";
    cout << "Average = " << (n1 + n2) / 2 << "\n";
    cout << "Distance = " << double (n1 - n2) << "\n";
    cout << "Maximum = " << std::max (n1,n2) << "\n";
    cout << "Minimum = " << std::min (n1,n2) << "\n";


     


}