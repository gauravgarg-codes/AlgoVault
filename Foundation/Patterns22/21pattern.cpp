#include <bits/stdc++.h>
using namespace std;
    void print(int n){
        for(int i=0; i<n; i++){
            if(i==0 || i==n-1){
                for(int j=0; j<n-1; j++){
                cout << "x";
                }
            }
            else {
                cout << "x";
                for(int j=0; j<n-3; j++){
                    cout << " ";
                }
                cout << "x";

            }
            cout << endl;
        }
           
    }
    



int main(){
    int t;
    cout << "Enter the number repition you want to run: ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cout << "enter the number of lines/ row: ";
        cin >> n;
        print(n);
    }



    return 0;
}