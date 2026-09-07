#include <bits/stdc++.h>
using namespace std;
 void print(int n){
    // write the code
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }

        //for(int j=0; j<2*i+1; j++){
        //    cout << "* ";}  ---> iske jagha charactor put krne hai
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for ( int j=0; j<2*i+1; j++){
            cout << ch;
            if(j<breakpoint) ch++;
            else ch--;
        }
  
            

        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        cout << endl ;
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

    A
   ABA
  ABCBA
 ABCDCBA      


*/