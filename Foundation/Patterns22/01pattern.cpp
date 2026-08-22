#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for (int i =0; i<n; i++){
        for(int j=0;j<n;j++){
            cout << "x ";
        }
        cout <<endl;
    }    
}
int main(){
   // int n;
   // cin>>n;
   // print(n);
    int t;
    cout << "enter the repition you want to print the pattern : " ;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        print(n);
    }
    return 0;

}






