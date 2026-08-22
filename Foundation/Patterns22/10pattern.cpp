#include <bits/stdc++.h>
using namespace std;
 void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "X ";
        }
    cout << endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << "X ";
        }
    cout << endl;
    }
 }

int main(){
    int t;
    cout << "enter the repition you want to print: ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cout <<"enter the no. of rows of symmerty pattern";
        cin >> n;
        print(n);
    }
    

    return 0;
}


// expexted pattern
/*

x
x x
x x x
x x x x
x x x x x
x x x x
x x x
x x
x

*/