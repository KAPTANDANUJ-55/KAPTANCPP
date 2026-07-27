/*
  *
 ***
*****

*/

#include <iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
          cout<<" "; 
        
        }

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}


int main(){
    int n;
    cout << "Enter The Value Of n: ";
    cin >> n;
    print(n);
}