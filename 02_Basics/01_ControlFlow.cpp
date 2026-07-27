#include <iostream>

using namespace std;

int main() {
    // ==========================================
    // 1. Standard if-else-if & Nested Conditions
    // ==========================================
    cout << "=== 1. Standard If-Else & Nesting ===" << endl;
    int score = 85;
    bool hasAttendance = true;

    if (score >= 90) {
        cout << "Grade: A+" << endl;
    } else if (score >= 80) {
        // Nested condition check
        if (hasAttendance) {
            cout << "Grade: A (Qualified for Honor Roll)" << endl;
        } else {
            cout << "Grade: A (Attendance short, no Honor Roll)" << endl;
        }
    } else if (score >= 70) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    // ==========================================
    // 2. Ternary Operator (Inline Decision)
    // ==========================================
    cout << "\n=== 2. Ternary Operator ===" << endl;
    int age = 19;
    
    // syntax: condition ? expression1_if_true : expression2_if_false
    string status = (age >= 18) ? "Adult / Eligible to Vote" : "Minor";
    cout << "Status: " << status << endl;

    // Nested Ternary Example (Avoid overusing as it reduces readability)
    int number = -5;
    string numType = (number > 0) ? "Positive" : ((number < 0) ? "Negative" : "Zero");
    cout << "Number Type: " << numType << endl;

    // ==========================================
    // 3. Switch-Case & Fallthrough Behavior
    // ==========================================
    cout << "\n=== 3. Switch-Case & Fallthrough ===" << endl;
    char userRole = 'A'; // 'A' = Admin, 'M' = Manager, 'U' = User

    switch (userRole) {
        case 'A':
            cout << "Access Level: Full Administrative Rights" << endl;
            break; // Break execution and exit switch
        case 'M':
            cout << "Access Level: Managerial Access" << endl;
            break;
        case 'U':
            cout << "Access Level: Standard User Access" << endl;
            break;
        default:
            cout << "Access Level: Invalid Role" << endl;
            break;
    }

    // Practical Use of Fallthrough: Grouping Multiple Cases
    cout << "\n--- Intentional Fallthrough Example ---" << endl;
    char dayType = 'S'; // 'M', 'T', 'W', 'T', 'F' = Weekday | 'S' = Weekend

    switch (dayType) {
        case 'M':
        case 'T':
        case 'W':
        case 't':
        case 'F':
            cout << "It is a Weekday. Time to grind!" << endl;
            break;
        case 'S':
        case 's': // Capital 'S' aur Small 's' dono yahan hit honge
            cout << "It is the Weekend! Time to relax/code projects." << endl;
            break;
        default:
            cout << "Invalid Day Type Code." << endl;
            break;
    }

    return 0;
}


/*
Pro-Tips / CP Nuances:Branch Prediction: Modern CPUs code me if-else ki probability predict karte hain. 
Agar tune sabse zyada true hone wali condition pehle rakhi hai,
 toh CPU branch prediction miss hone ke chances kam hote hain
  (Code marginally faster chalta hai).
  
  Switch vs If-Else: switch statements internal Jump Tables create karte hain 
  ($O(1)$ lookup speed agar cases kafi ho), jabki if-else-if chain $O(N)$ sequential checks
   karti hai
*/





//--------------------The End----------------