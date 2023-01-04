/* Programmer =  Roshan Mehra
Purpose = Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not.
Date = 24/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int length, breadth;

    cout<<"Enter length and breadth: "<<endl;
    cin>>length>>breadth;

    if(length != breadth)
       cout<<"Rectangle";
    else
       cout<<"Square";

    return 0;
}
