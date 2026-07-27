/*
1. Loop Types Overview
while loop: Entry-controlled loop. 
Jab condition pehle se na pata ho aur iteration dynamically terminate ho.

do-while loop: Exit-controlled loop. 
Pehle code execute hoga, fir condition check hogi — yani kam se kam ek baar hamesha chalega.

for loop: Tab use karte hain jab number of iterations pehle se fixed ya pata ho.

Range-based for loop (C++11):
 Arrays/Vectors ko easily traverse karne ke liye, 
 indexing handling ki koi chik-chik nahi.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // ==========================================
    // 1. standard for loop & break/continue
    // ==========================================
    cout << "=== 1. Standard For Loop (break & continue) ===" << endl;
    
    // 1 se 10 tak print karenge, par 5 ko skip karenge aur 8 par stop honge
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "[Skipped 5] ";
            continue; // Age ka block skip karke agle iteration par chala jata hai
        }
        if (i == 8) {
            cout << "\n[Hit 8 -> Breaking Loop]";
            break; // Loop ko instantly terminate kar deta hai
        }
        cout << i << " ";
    }
    cout << endl;

    // ==========================================
    // 2. while vs do-while loop
    // ==========================================
    cout << "\n=== 2. While vs Do-While ===" << endl;
    
    int count = 5;
    cout << "While loop check (condition false on start): ";
    while (count < 5) {
        cout << count << " "; // Kabhi run nahi hoga
        count++;
    }
    cout << "(Nothing printed)" << endl;

    cout << "Do-While loop check (condition false on start): ";
    do {
        cout << count << " "; // Ek baar ZAROOR chalega
        count++;
    } while (count < 5);
    cout << endl;

    // ==========================================
    // 3. Range-Based For Loop (Modern C++)
    // ==========================================
    cout << "\n=== 3. Range-Based For Loop ===" << endl;
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Read-only traversal
    cout << "Reading elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Modifying elements using Reference (&)
    // Agar '&' nahi lagayenge toh copy banegi aur array modify nahi hoga
    for (int &num : numbers) {
        num *= 2; // Sabhi elements ko double kar do
    }

    cout << "After doubling (with reference &): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // ==========================================
    // 4. Nested Loops (Pattern Printing Basis)
    // ==========================================
    cout << "\n=== 4. Nested Loop (Grid Example) ===" << endl;
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << "(" << row << "," << col << ") ";
        }
        cout << endl;
    }

    return 0;
}




// ------------------The End ----------------------