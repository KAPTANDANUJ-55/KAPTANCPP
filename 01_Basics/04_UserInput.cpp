
    #include <iostream>
#include <string>
#include <limits> // numeric_limits ke liye

using namespace std; // Ab std:: likhne ki zarurat nahi hai

int main() {
    int age;
    string fullName;
    string collegeName;

    cout << "=== 1. Standard Input vs Stream Buffering ===" << endl;
    cout << "Enter your age: ";
    cin >> age; // Age read karega, par '\n' buffer me chhod dega

    // Buffer me se bacha hua '\n' clear karne ke liye
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your full name (with spaces): ";
    getline(cin, fullName); // Reads whole line including spaces

    cout << "Enter your college name: ";
    getline(cin, collegeName);

    cout << "\n--- Displaying Inputs ---" << endl;
    cout << "Age: " << age << endl;
    cout << "Name: " << fullName << endl;
    cout << "College: " << collegeName << endl;

    // 2. Input Validation (Buffer Failure Handling)
    cout << "\n=== 2. Input Validation Check ===" << endl;
    int rollNumber;
    cout << "Enter your Roll Number (Integer): ";
    cin >> rollNumber;

    // Agar user ne integer ki jagah string/char enter kar diya (e.g. "abc")
    if (cin.fail()) {
        cerr << "[ERROR]: Invalid input! Non-integer value entered." << endl;
        cin.clear(); // Error state flag ko reset karta hai
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bad input ko drop karta hai
    } else {
        cout << "Roll Number recorded: " << rollNumber << endl;
    }

    return 0;
}
     
