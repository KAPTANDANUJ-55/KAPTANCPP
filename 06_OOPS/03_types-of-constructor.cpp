#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
     string name;
     int rollNo;
     string favSub;
 public:

 // default constructor

    Student(){
        cout<< "Student Constructor Is Called"<< endl;
    }
     // parameterized constructor

    Student(int rollNo, string name, string favSub){
        this->favSub = favSub;
        this->name = name;
        this->rollNo = rollNo;
    }

    Student(string name, string favSub){
        this->favSub= favSub;
        this->name = name;
    }

    // inline constructor

   inline Student(int rN, string name) : name(name) , rollNo(rN){
        cout<< "inline called" << endl;
    }
};

int main(){
    Student s1(3,"wow", "physics");
  cout << s1.rollNo <<  s1.name  << s1.favSub << endl;

    Student s2("ajay ghale","chemistry");
      cout  << " "<< s2.name << " " << " " << s2.favSub << endl;

      
    Student s3(1,"pagan min");
      cout  << " "<< s3.name << " " << " " << s3.rollNo << endl;

}