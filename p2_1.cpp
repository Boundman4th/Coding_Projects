#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double n = 10;
    double p; //power

    p = 2; 

    cout << n/10 << "\n"; //1
    cout << n << "\n"; //10
    cout << pow(n, p) << "\n"; //100
    ++p;
    cout << pow(n, p) << "\n"; //1000
    ++p;
    cout << pow(n, p) << "\n"; //10000
    ++p;
    cout << pow(n, p) << "\n"; //100000
    ++p;
    cout << pow(n, p) << "\n"; //1000000
    ++p;
    cout << pow(n, p) << "\n"; //10000000
    ++p;
    cout << pow(n, p) << "\n"; //100000000
    ++p;
    cout << pow(n, p) << "\n"; //1000000000
    ++p;
    cout << pow(n, p) << "\n"; //10000000000
     ++p;
    cout << pow(n, p) << "\n"; //100000000000
    

    return 0;
    
}