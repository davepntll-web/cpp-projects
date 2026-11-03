#include <iostream>
using namespace std;

/*1. Code a C++ program that converts a user inout (in cm) to inches.
Name it toinches.cpp*/

int main() {
    float number;
    float result;

    cout << "Welcome to my cm to inches converter!" << endl;
    cout << "Input in cm. : "; cin >> number;

    result = number/2.54;
    cout << "Output: " << number << " centimeters is equivalent to " << result << " in inches";

    return 0;
}   
