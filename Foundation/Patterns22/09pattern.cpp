#include <bits/stdc++.h>
using namespace std;
    void print(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1; j++){
                cout << " ";
            }
            for(int j=0; j<2*i+1; j++){
                cout << "X";
            }
            for(int j=0; j<n-i-1; j++){
                cout << " ";
            }
        cout << endl;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=0; j<2*n-(2*i+1); j++){
                cout << "X";
            }
            for(int j=0; j<i; j++){
                cout<< " ";
            }

        cout << endl;
        }
    }


int main(){
    int t;
    cout << "enter the  reptition you want to run: ";
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cout << "enter the number of rows of symmetry pattern: ";
        cin >> n;
        print(n);
    }


    return 0;
}