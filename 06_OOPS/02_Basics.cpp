#include <iostream>
#include <string>
using namespace std;


class Bank{
  //getter setter mahima
    private:
     int acc_no;
     int id;
     string name;

     public:
      void setName(int n){
        name = n;
      }
      void getName(){
        cout<< name << endl;
      }
      void setId(int id){
         this->id=id;
      }
      void getId(){
        cout << id << endl;
      }

      void setName(string name){
        this->name = name;
      }
      string getName(int magicNum){
        if(magicNum==69){
         string n = name;
         cout<< n << endl;
         return n;
        }
         cout<<"null"<< endl;

         return "";
      }


};

int main(){
    Bank bank;
    bank.setId(3);
    bank.getId();
    bank.setName("chanakya");
    bank.getName(69);

}