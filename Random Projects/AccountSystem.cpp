#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <unordered_map>
using namespace std;

int signing_opt() {
    string response;

    while (true) {
        cout << "Sign in or Sign up? "; getline(cin, response);

        for (char &letter : response) {
            letter = tolower(letter);
        }

        if (response == "sign up") {
            return 1;
        }
        
        else if (response == "sign in") {
            return 2;
        }

        else {
            cout << "Please choose between Sign up and Sign in.";
        }
    }
}

string signup_addUsername(unordered_map<string, string>& users) {
    string response;

    while (true){
        cout << "Create 6-12 characters username." << endl; 
        cout << "Enter: "; cin >> response;

        if (response.size() < 6) {
            cout << "Username cannot be lower than 6 characters. Please try again." << endl;
        }

        else if (response.size() > 12) {
            cout << "Username should not exceed 12 characters. Please try again." << endl;
        }

        else {
            while (true) {
                if (users.find(response) == users.end())
                return response;

                else {
                cout << "Username already exist. Please try again." << endl;
                }
            }
        }
    }
}

string signup_addPassword(unordered_map<string, string>& users, string fnctn_username) {
    string response;
    string confirmation;

    while (true){
        cout << "Create 5-10 characters password." << endl;
        cout << "Enter: "; cin >> response;

        if (response.size() < 5) {
            cout << "Password cannot be lower than 5 characters. Please try again." << endl;
        }

        else if (response.size() > 10) {
            cout << "Password should not exceed 10 characters. Please try again." << endl;
        }

        else {
            while (true) {
                cout << "Confirm your password: "; cin >> confirmation;

                if (confirmation.compare(response) != 0) {
                    cout << "Passwords doesn't match. Please re-enter your password." << endl;
                }

                else {
                    users.insert({fnctn_username, response});
                }
            }
        }
    }
}

string signin_addUsername(unordered_map<string, string>& users) {
    string response;

    while (true) {
        cout << "Enter your username: "; cin >> response;
        if (response.size() < 6) {
            cout << "Username cannot be lower than 6 characters. Please try again." << endl;
        }

        else if (response.size() > 12) {
            cout << "Username should not exceed 12 characters. Please try again." << endl;
        }

        else {
            while (true) {
                if (users.find(response) != users.end())
                return response;

                else {
                cout << "Username does not exist. Please try again." << endl;
                }
            }
        }
    }
}

int signin_addPassword(unordered_map<string, string>& users, string fnctn_username) {
    string response;

    while (true){
        cout << "Enter your password: "; cin >> response;
        if (response == users[fnctn_username]){
            return 1;
        }

        else {
            cout << "Password does not match. Please try again." << endl;
        }
    }
}

int main() {
    
}
