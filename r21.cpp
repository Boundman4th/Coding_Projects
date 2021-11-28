#include <iostream>
#include <cmath>

using namespace std;

main ()
{

   
    cout << "What is the value of s0? ";
    int s0;
    cin >> s0;

    cout << "What is the value of v0? ";
    int v0;
    cin >> v0;

    cout << "What is the value of t? ";
    int t;
    cin >> t;

    cout << "What is the value of g? ";
    int g;
    cin >> g;


    double total = s0 + (v0 * t) + ((g * (t*t))/2);

     cout << "Total S = "  << total << "\n";

    return 0;
}