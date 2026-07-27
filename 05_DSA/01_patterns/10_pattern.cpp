/*
*
**
***
****
*****
*****
****
***
**
*

*/

#include <iostream>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }

        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            cout << "*";
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