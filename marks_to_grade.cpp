/* Programmer =  Roshan Mehra
Purpose =  Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below 
Date = 24/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int marks;

    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    if(marks>90){
    cout<<"A+";
    }
    else if(marks>80){
        cout<<"A";
    }
    else if(marks>70){
        cout<<"B+";
    }
    else if(marks>60){
        cout<<"B";
    }
    else if(marks>50){
        cout<<"C";
    }
    else if(marks>40){
        cout<<"D";
    }
    else if(marks>30){
        cout<<"E";
    }
    else{
        cout<<"F";
    }
    return 0;
}
