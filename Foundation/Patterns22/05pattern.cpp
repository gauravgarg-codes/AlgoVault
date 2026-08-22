#include<bits/stdc++.h>
using namespace std;
    void print(int n){
        for(int i=0;i<n;i++){
            for(int j=n; j>i; j--){
                cout << "* ";
            }
            cout << endl;
        }
    }

int main(){
    int t;
    cout << "enter the repetition you want: ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cout << "enter the number of rows: ";
        cin >> n;
        print (n);
        cout << endl;
    }

    return 0;

}