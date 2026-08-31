#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int* rollNO;     // Pointer to hold a memory address on the Heap
    string* favSub;  // Pointer to hold a memory address on the Heap

    // Parameterized Constructor
    Student(string name, int roll, string sub) {
        this->name = name;
        
        // Dynamically allocating memory on the HEAP
        this->rollNO = new int(roll); 
        this->favSub = new string(sub);
        
        cout << "Constructor called: Memory allocated on Heap." << endl;
    }

    // Destructor
    ~Student() {
        // CRITICAL: Explicitly releasing heap memory to prevent memory leaks
        delete rollNO;
        delete favSub;
        
        cout << "Destructor called: Heap memory explicitly freed." << endl;
    }
};

int main() {
    // Creating a block scope to force creation and destruction
    {
        // s1 is allocated on the STACK
        Student s1("Rohit", 3, "Physics");
        
        cout << "Student name: " << s1.name << ", Roll: " << *(s1.rollNO) << endl;
    } // <-- s1 goes out of scope here. The Destructor triggers automatically!

    cout << "Program ended cleanly." << endl;
    return 0;
}
