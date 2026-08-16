// nested If else practice
/*
#include <bits/stdc++.h>
using namespace std;
int main (){
    int age;
    cin >> age; 
    
    if (age>18){
        if(age > 55 && age <=57){
        cout << "eligible for job but retirement soon";
       }
       else if(age>57){
            cout << "retirement time";
       }
       else{
        cout << "eligible for job";
       }
    }
    else if(age<18){
        cout << "not eligible for job";
    }
    return 0;
}
*/
// Switch statement practice

#include <bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout <<"enter the day number";
    cin >> day;
    switch (day){
        case 1 : 
            cout << "Monday";
            break;
        case 2 : 
            cout << "Tuesday";
            break;
        case 3 :  
            cout << "Wednesday";
            break;
        case 4 : 
            cout << "Thursday";
            break;
        case 5 :   
            cout << "Friday";
            break;
        case 6 : 
            cout << "Saturday";
            break;

        case 7 : 
            cout << "Sunday";
            break;
        default : cout << "hello ! shi number daloo glt dala hai";
    }
    cout << endl <<"executed";
    return 0;
}