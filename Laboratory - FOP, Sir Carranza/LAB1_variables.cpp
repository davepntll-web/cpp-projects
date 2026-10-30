#include <iostream>
using namespace std;

int main(void)
{
    float x, y;
    float total, diff, prod;
    float quotient;

    cout << "Enter your first integer: ";
    cin >> x;

    cout << "Enter your second integer: ";
    cin >> y;

    total = x + y;
    diff = x - y;
    prod = x * y;
    quotient = (float)x / y;

    cout << "Sum = " << total << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;
    cout << "Quotient = " << quotient << endl;

    return 0;
}