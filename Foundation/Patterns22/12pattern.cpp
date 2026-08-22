#include <bits/stdc++.h>
using namespace std;
 void print(int n){
   for(int i=1; i<=n; i++){
    // numbers
        for(int j=1; j<=i; j++){
            cout << j;
        }
    // space
        for(int j=0; j<2*(n-i); j++){
            cout << "_";
        }
    // number
        for(int j=i; j>=1; j--){    // this part made me stuck just
            cout << j;
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

1      1 
12    21
123  321   
12344321

*/