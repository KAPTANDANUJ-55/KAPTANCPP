#include <iostream>
#include <string>

using namespace std;

int main() {
    // ==========================================
    // 1. Arrays & Pointer Decay
    // ==========================================
    cout << "=== 1. Arrays & Memory Layout ===" << endl;
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Size calculation

    cout << "Array base address (arr):    " << arr << endl;
    cout << "First element address (&arr[0]): " << &arr[0] << endl;

    cout << "\nAccessing elements using Pointer Arithmetic (*(arr + i)):" << endl;
    for (int i = 0; i < n; i++) {
        // arr[i] is identical to *(arr + i)
        cout << "Index " << i << ": Value = " << *(arr + i) 
             << " | Address = " << (arr + i) << endl;
    }

    // ==========================================
    // 2. Multidimensional Arrays (2D Grid)
    // ==========================================
    cout << "\n=== 2. 2D Array Memory Mapping ===" << endl;
    // 2 Rows, 3 Columns
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 2D Array RAM me row-major order me flat/linear store hota hai
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }

    // ==========================================
    // 3. std::string Operations
    // ==========================================
    cout << "\n=== 3. C++ std::string Operations ===" << endl;
    string str1 = "C++";
    string str2 = "Programming";

    // Concatenation
    string full = str1 + " " + str2;
    cout << "Full String: " << full << endl;
    cout << "Length: " << full.length() << " or " << full.size() << endl;

    // Substring extraction: substr(startIndex, length)
    string sub = full.substr(4, 7); // Extracts "Program"
    cout << "Substring (index 4, len 7): " << sub << endl;

    // Searching in string
    size_t pos = full.find("Program");
    if (pos != string::npos) {
        cout << "'Program' found at index: " << pos << endl;
    }

    // Character modification
    full[0] = 'c'; // Strings are mutable in C++ (unlike Java/Python)
    cout << "Modified String: " << full << endl;

    return 0;
}
















//-------------------------The End-----------------------