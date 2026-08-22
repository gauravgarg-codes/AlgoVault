#include <bits/stdc++.h>
using namespace std;
    void print(int n){
        for(int i=1; i<=n; i++){
            for(int j =0; j<n-i+1 ;j++){
                cout << j+1;
            }
            cout << endl;
        }

    }


int main(){
    int t;
    cout << "enter the repition to run: ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cout << "enter the number of rows: ";
        cin >> n;
        print(n);
    }

    return 0;

}