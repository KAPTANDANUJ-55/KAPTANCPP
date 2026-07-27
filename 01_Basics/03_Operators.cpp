/*
1. Types of Operators
Arithmetic: +, -, *, /, % (Modulo - remainder nikalne ke liye)

Relational: ==, !=, >, <, >=, <=

Logical: && (AND), || (OR), ! (NOT)

Bitwise: & (AND), | (OR), ^ (XOR), ~ (NOT), << (Left Shift), >> (Right Shift)

Increment/Decrement: Prefix (++a), Postfix (a++)
*/

#include <iostream>
using namespace std;

int main(){
    int a =7;
    int b=9;
    cout << "=======Arithmetic Operators========"<< endl;
    cout << "Floor Division(Integer Division): " << a/b << endl;
    cout << "Sum Operator: " << a+b<< endl;
    cout << "Subtraction Operator: "<< a-b << endl; 
    cout << "a % b (Modulo/Remainder): " << a % b << endl; // Output 1
    cout << "(double)a / b: " << static_cast<double>(a) / b <<endl; // Output 3.5

    // ------------------Increment Decrement(x++ , x--)--------------
     int x =9;
     int y = x++;
    cout<<"first take value then increment "<< "The value of x is: "<< x << " y is: "<<y<< endl;

        int k =3;
     int l= ++k;
 cout<<"first increment then value "<< "The value of k is: "<< k << " l is: "<<l << endl;

// 3. Bitwise Operators (Binary Level Operations)
    cout << "\n=== Bitwise Operators ===" <<endl;
    int n1 = 5; // Binary: 0101
    int n2 = 3; // Binary: 0011

    cout << "n1 & n2 (AND): " << (n1 & n2) <<endl; // 0101 & 0011 = 0001 (1)
   cout << "n1 | n2 (OR) : " << (n1 | n2) << endl; // 0101 | 0011 = 0111 (7)
    cout << "n1 ^ n2 (XOR): " << (n1 ^ n2) << endl; // 0101 ^ 0011 = 0110 (6)

    // Bit Shift Tricks:
    // Left Shift (<<): Number ko 2^k se multiply kar deta hai
    // Right Shift (>>): Number ko 2^k se divide kar deta hai
    cout << "n1 << 1 (Left Shift 1):  " << (n1 << 1) << endl; // 5 * 2 = 10
    cout << "n1 >> 1 (Right Shift 1): " << (n1 >> 1) << endl; // 5 / 2 = 2

    // 4. Fast Odd/Even Check using Bitwise AND
    cout << "\n=== Bitwise Trick: Odd/Even Check ===" << endl;
    int num = 14;
    if ((num & 1) == 0) {
        cout << num << " is EVEN" << endl;
    } else {
        cout << num << " is ODD" << endl;
    }



    return 0; //optional but good practice

