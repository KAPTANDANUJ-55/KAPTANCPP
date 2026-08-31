#include <iostream>
#include <string> 

using namespace std;


class Car{
    string model;

    public:
    void drive(){
        cout << "car is running"<< endl;
    }
};

int main(){
   Car myCar;
   myCar.drive();
}