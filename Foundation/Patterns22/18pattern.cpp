#include <bits/stdc++.h>
using namespace std;
 void print(int n){
    // write the code
    for(int i=0; i<n; i++){
            for(char ch ='E'-i; ch<='E'; ch++){
                cout << ch << " ";
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

E
D E
C D E
B C D E
A B C D E   


*/