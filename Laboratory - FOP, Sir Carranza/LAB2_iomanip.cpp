#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string heading = "Personal Information";
    string lbl_name;
    int lbl_age;
    string lbl_address;

    cout << "Enter your name: "; getline(cin, lbl_name);  
    cout << "Enter your age: "; cin >> lbl_age;
    cin.ignore();
    cout << "Enter your address: "; getline(cin, lbl_address);

    cout << endl << endl << endl;
    cout << right << setw(66) << heading << endl << endl;
    cout << left << setw(5) << "Name: " << lbl_name << endl;
    cout << left << setw(5) << "Age: " << lbl_age << endl;
    cout << left << setw(5) << "Address: " << lbl_address << endl;
}