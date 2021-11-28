#include <iostream>
#include <cmath>

using namespace std;

main()
{
    double PI = 3.14;

    cout << "What is the value of a? ";
    int a;
    cin >> a;

    cout << "What is the value of p? ";
    int p;
    cin >> p;

    cout << "What is the value of m1? ";
    int m1;
    cin >> m1;

    cout << "What is the value of m2? ";
    int m2;
    cin >> m2; 
    
    double total = (4 * (PI * PI)) * (pow(a, 3) / (p*p) * (m1+m2));

     cout << "G = " << total; 

     return 0;

}