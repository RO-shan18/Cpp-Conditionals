/* Programmer =  Roshan Mehra
Purpose = Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.
Date = 24/10/2022  */

#include<iostream>
using namespace std;

int main(){
    
    int number;

    cout<<"Enter the number: "<<endl;
    cin>>number;
 
    if(number<0){
        cout<<"The number is negative, it is skipped "<<endl;
    }  
    else{
        cout<<"Number is: "<<number;
    }  

    return 0;
}