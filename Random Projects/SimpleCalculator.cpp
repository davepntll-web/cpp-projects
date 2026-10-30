#include <iostream>
#include <vector>
using namespace std;

int main() {
    float num1;
    float num2;
    char op;
    cout << "Enter a number: "; cin >> num1;

    while (true) {
        cout << "Enter operator: "; cin >> op;

        if (op == '+' || op == '-' || op == '*' || op == '/') {
            cout << "Enter a number: "; cin >> num2;
                if (op == '+') {
                    num1 += num2;
                }
                else if (op == '-') {
                    num1 -= num2;
                }
                else if (op == '*') {
                    num1 *= num2;
                }
                else if (op == '/') {
                    if (num2 == 0){
                        cout << "Divisor must not be equal to 0.";
                    }
                    num1 /= num2;
                }
            cout << "Current result: " << num1 << endl;
        }
        else if (op == '=') {
            cout << "Result: " << num1;
            break;
        }
        else {
            cout << "Invalid input." << endl;
        }
    }
}