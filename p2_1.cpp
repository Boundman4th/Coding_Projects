#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double n = 10;
    double power;

    power = 2; 

    cout << n/10 << "\n"; //1
    cout << n << "\n"; //10
    cout << pow(n, power++) << "\n"; //100
    cout << pow(n, power++) << "\n"; //1000
    cout << pow(n, power++) << "\n"; //10000
    cout << pow(n, power++) << "\n"; //100000
    cout << pow(n, power++) << "\n"; //1000000
    cout << pow(n, power++) << "\n"; //10000000
    cout << pow(n, power++) << "\n"; //100000000
    cout << pow(n, power++) << "\n"; //1000000000
    cout << pow(n, power++) << "\n"; //10000000000
    cout << pow(n, power) << "\n"; //100000000000
    

    return 0;
    
}