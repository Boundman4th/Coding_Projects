#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n = 1; //number
    int p2 = 2; //square
    int p3 = 3; //cube
    int p4 = 4; //fourth


    cout << "These are the square, cube and fourth powers of 1. \n";
    cout << pow(n, p2) << "\n";
    cout << pow(n, p3) << "\n";
    cout << pow(n, p4) << "\n";
    n++;
    
    cout << "These are the square, cube and fourth powers of 2. \n";
    cout << pow(n, p2) << "\n";
    cout << pow(n, p3) << "\n";
    cout << pow(n, p4) << "\n";
    n++;

    cout << "These are the square, cube and fourth powers of 3. \n";
    cout << pow(n, p2) << "\n";
    cout << pow(n, p3) << "\n";
    cout << pow(n, p4) << "\n";
    n++;

    cout << "These are the square, cube and fourth powers of 4. \n";
    cout << pow(n, p2) << "\n";
    cout << pow(n, p3) << "\n";
    cout << pow(n, p4) << "\n";
    n++;
    
    cout << "These are the square, cube and fourth powers of 5. \n";
    cout << pow(n, p2) << "\n";
    cout << pow(n, p3) << "\n";
    cout << pow(n, p4) << "\n";
    n++;

    return 0;
}