//File: power_table.cpp
//Name: Alex Berry
//Date: 08/24/2016
//Purpose: Display table of square and cube values
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int a1 = 1;
    double a2 = 2;
    double a3 = 3;
    double a4 = 4;
    
    cout << "Table of Square and Cube Powers" << endl;
    cout << "a^1\ta^2\ta^3" << endl;
  
    cout << a1 << "\t" << pow(a1, 2) << "\t" << pow(a1, 3) << endl;
    cout << a2 << "\t" << pow(a2, 2) << "\t" << pow(a2, 3) << endl;
    cout << a3 << "\t" << pow(a3, 2) << "\t" << pow(a3, 3) << endl;
    cout << a4 << "\t" << pow(a4, 2) << "\t" << pow(a4, 3) << endl;
 
    return 0;
}
