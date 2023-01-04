/* Programmer =  Roshan Mehra
Purpose = Q2 - Write a program to print absolute value of a number entered by the user.
Date = 24/10/2022  */

#include<iostream>
using namespace std;

int main(){
    
    int number;
    
    cout<<"Enter a number: "<<endl;
    cin>>number;

    if(number<0){
        number = -number;
        cout<<number;
    }
    else{
        cout<<number;
    }

    return 0;
}