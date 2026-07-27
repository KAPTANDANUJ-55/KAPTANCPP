/*
12345
1234
123
12
1
*/




#include <iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout << j-i+1;
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