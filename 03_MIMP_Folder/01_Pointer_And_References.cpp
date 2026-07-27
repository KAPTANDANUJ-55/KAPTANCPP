/*

Memory Address (& operator): 
RAM me har variable ko ek unique house 
address (hexadecimal number like 0x7ffd...) milta hai.

Pointer Variable (type* ptr):
 Ek aisa special variable jo kisi doosre 
 variable ka memory address store karta hai.

Dereferencing (*ptr):
 Pointer ke paas jo address rakha hai, 
 us location par ja kar wahan ki value padhna ya change karna.

Reference (type& ref): 
Kisi existing variable ka Alias (dussra naam/nickname).
 Ye naya memory box nahi banata, balki same memory slot ko doosra naam de deta hai.

*/


#include <iostream>

using namespace std;

int main() {
    // ==========================================
    // 1. Memory Address & Pointers Basics
    // ==========================================
    cout << "=== 1. Pointer Fundamentals ===" << endl;
    int num = 42;
    int* ptr = &num; // ptr holds the memory address of 'num'

    cout << "Value of num:           " << num << endl;
    cout << "Memory Address of num (&num): " << &num << endl;
    cout << "Value stored in ptr:    " << ptr << endl;
    cout << "Dereferenced ptr (*ptr): " << *ptr << endl; // Reads value at address

    // Modifying value via pointer
    *ptr = 100; // Go to the address stored in ptr and change value to 100
    cout << "New value of num (after *ptr = 100): " << num << endl;

    // ==========================================
    // 2. Null Pointers & Wild Pointers
    // ==========================================
    cout << "\n=== 2. Null Pointer Safety ===" << endl;
    
    // Always initialize pointers! Uninitialized pointer = Wild Pointer (DANGEROUS)
    int* safePtr = nullptr; // Modern C++ NULL representation (C++11)

    if (safePtr != nullptr) {
        cout << "Dereferencing safePtr: " << *safePtr << endl;
    } else {
        cout << "safePtr is NULL! Dereferencing prevented (avoided Segmentation Fault)." << endl;
    }

    // ==========================================
    // 3. References (Alias/Nickname)
    // ==========================================
    cout << "\n=== 3. References in Action ===" << endl;
    int score = 75;
    int& scoreRef = score; // scoreRef is an ALIAS for score (same memory address)

    cout << "Original Score: " << score << endl;
    cout << "Score via Ref:  " << scoreRef << endl;
    cout << "Address of score:    " << &score << endl;
    cout << "Address of scoreRef:  " << &scoreRef << " (Exact Same Address!)" << endl;

    // Modifying value via reference
    scoreRef = 95;
    cout << "Updated Score (modified via scoreRef): " << score << endl;

    // ==========================================
    // 4. Constant Pointers vs Pointer to Const
    // ==========================================
    cout << "\n=== 4. Const with Pointers ===" << endl;
    int val1 = 10, val2 = 20;

    // Case A: Pointer to Constant (Value change nahi kar sakte, Address kar sakte hain)
    const int* ptrToConst = &val1;
    // *ptrToConst = 15; // ERROR! Value is read-only
    ptrToConst = &val2;  // OK! Address change ho sakta hai

    // Case B: Constant Pointer (Address lock ho gaya, Value change kar sakte hain)
    int* const constPtr = &val1;
    *constPtr = 15;     // OK! Value update ho sakti hai
    // constPtr = &val2; // ERROR! Address lock hai

    cout << "val1 after modification via constPtr: " << val1 << endl;

    return 0;
}







// --------------------The End-----------------