
/*
Feature,    Stack Memory,                            Heap Memory
Allocation,Automatic (jab variable declare hota hai),Manual (new operator se)
Deallocation,Automatic (jab scope {} khatam hota hai),Manual (delete ya delete[] karna compulsory hai)
Size Limit,Choti hoti hai (few MBs). Exceed hone par Stack Overflow aata hai.,Kafi badi hoti hai (system ki RAM limit tak).
Speed,Extremely fast.,Slightly slower.
*/
/*


2. new and delete Operators
new: Heap me memory request karta hai aur us allocated address
 ka pointer return karta hai.

delete: Single variable ki Heap memory free karta hai.

delete[]: Dynamically allocated array ki memory free karta hai.

Crucial Rule: Agar tune new se memory li aur delete nahi kiya, 
toh wo memory tab tak occupied rahegi jab tak system restart na ho. 
Isi ko Memory Leak kehte hain.
*/

#include <iostream>

using namespace std;

int main() {
    // ==========================================
    // 1. Single Variable Dynamic Allocation
    // ==========================================
    cout << "=== 1. Heap Allocation for Single Variable ===" << endl;
    
    // Heap me integer allocate karo aur initialize bhi karo (*heapInt = 100)
    int* heapInt = new int(100);

    cout << "Address on Heap: " << heapInt << endl;
    cout << "Value on Heap:   " << *heapInt << endl;

    // Memory cleanup (Compulsory)
    delete heapInt; 
    heapInt = nullptr; // Dangling pointer se bachne ke liye nullptr set karna best practice hai


    // ==========================================
    // 2. Dynamic Array Allocation (User-defined size)
    // ==========================================
    cout << "\n=== 2. Dynamic Array Allocation ===" << endl;
    
    int size = 5; // Size run-time par decide kar sakte hain
    int* arr = new int[size]; // Heap me array allocation

    // Array populate aur print karna
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Dynamic Array Elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Dynamic Array Cleanup (Notice delete[] bracket)
    delete[] arr; // Array ke liye delete[] use hota hai
    arr = nullptr;


    // ==========================================
    // 3. 2D Dynamic Array (Grid/Matrix on Heap)
    // ==========================================
    cout << "\n=== 3. 2D Dynamic Array (Array of Pointers) ===" << endl;
    
    int rows = 3, cols = 4;

    // Step 1: Create array of row pointers
    int** matrix = new int*[rows];

    // Step 2: Allocate column array for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Matrix me values assign karna
    int val = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = val++;
        }
    }

    // Displaying 2D Matrix
    cout << "2D Matrix on Heap:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Step 3: Deallocation (Reversed Order me clean karna compulsory hai)
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; // Pehle individual rows free karo
    }
    delete[] matrix; // Fir main row pointers array free karo
    matrix = nullptr;

    cout << "\nMemory successfully deallocated without leaks!" << endl;

    return 0;
}











//-------------------------The End----------------------