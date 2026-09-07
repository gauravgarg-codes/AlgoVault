#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0; i<n; i++){
        // first inner loop
        for(int j=i; j<n; j++){
            cout << "x";
            
        } 
        for(int j=0; j<2*i; j++){
            cout << "-";
        }
        for(int j=i; j<n; j++){
            cout << "x";
        }   
        cout << endl;
    }
     for(int i=0; i<n; i++){
        // first inner loop
        for(int j=0; j<=i; j++){
            cout << "x";
            
        } 
        for(int j=0; j<(2*n-2)-2*i; j++){
            cout << "-";
        }
        for(int j=0; j<=i; j++){
            cout << "x";
        }   
        cout << endl;
    }


}
    

 int main (){
    int t;
    cout << "Enter the repition to be printed: ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n ;
        cout << "enter the number of rows: ";
        cin >> n;
        print(n);
    }


    return 0;
 }

// expected pattern 
/*

xxxxxxxxxx
xxxx  xxxx
xxx    xxx
xx      xx
x        x
x        x
xx      xx
xxx    xxx
xxxx  xxxx
xxxxxxxxxx

*/


