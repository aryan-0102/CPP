#include <iostream>

using namespace std;

bool isAlphanumeric(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

bool isValidPassword(const string& password) {
    // Check if the password has at least 8 characters
    if (password.length() < 8) {
        return false;
    }

    bool hasAlpha = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    // Iterate through each character in the password
    for (char ch : password) {
        // Check for alphanumeric characters
        if (isAlphanumeric(ch)) {
            if (isalpha(ch)) {
                hasAlpha = true;
            } else if (isdigit(ch)) {
                hasDigit = true;
            }
        }
        // Check for special characters
        else {
            hasSpecial = true;
        }
    }

    // Check if the password meets all criteria
    return hasAlpha && hasDigit && hasSpecial;
}

int main() {
    string password;

    cout << "Enter a password: ";
    getline(cin, password);

    if (isValidPassword(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid. It should have at least 8 characters, alphanumeric, and at least one special character." << endl;
    }

    return 0;
}
