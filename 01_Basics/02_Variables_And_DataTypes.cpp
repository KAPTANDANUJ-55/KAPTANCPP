// Data Type,Keyword,Size (Bytes),Range / Example
// Integer,int,4 Bytes,−2⋅109 se +2⋅109 approx
// Character,char,1 Byte,"ASCII characters ('A', 'a', '9')"
// Boolean,bool,1 Byte,true (1) ya false (0)
// Float,float,4 Bytes,Single precision decimal (3.14f)
// Double,double,8 Bytes,Double precision decimal (3.14159265)

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age = 20;
    char grade = 'A';
    bool isProgrammer = true;
    float piFloat = 3.14159265f;
    double piDouble = 3.141592653589793;

    cout << "=== Data Types & Values ===" << endl;
    cout << "Age: "<< age << endl;
    cout << "Grade is: " << grade<< endl;
    cout << "is he is programmer: "<< isProgrammer<< endl;
    // std::setprecision se decimal ke baad ki precision dikhti hai
    cout << fixed << setprecision(8);
    cout << "Float Precision:  " << piFloat << endl;  // Loss of precision fast
    cout << "Double Precision: " << piDouble << endl; // Better precision

    cout << "\n=== Memory Sizes (using sizeof operator) ===" << endl;
    cout << "int size:    " << sizeof(int) << " bytes" << endl;
    cout << "char size:   " << sizeof(char) << " byte" << endl;
    cout << "bool size:   " << sizeof(bool) << " byte" << endl;
    cout << "float size:  " << sizeof(float) << " bytes" << endl;
    cout << "double size: " << sizeof(double) << " bytes" << endl;
}