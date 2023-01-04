/* Programmer =  Roshan Mehra
Purpose = Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.
Date = 24/10/2022  */

#include<iostream>
using namespace std;

int main(){
    
    int num1, num2;
    char opr;

    cout<<"Enter any operator(+,-,*,/,%): "<<endl;
    cin>>opr;

    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    switch(opr){
        case '+':
        cout<<"Additon of two numbers are: "<<num1 + num2<<endl;
        break;
        case '-':
        cout<<"Subtraction of two numbers are: "<<num1 - num2<<endl;
        break;
        case '*':
        cout<<"Multiplication of two numbers are: "<<num1 * num2<<endl;
        break;
        case '/':
        cout<<"Division of two numbers are: "<<num1 / num2<<endl;
        break;
        case '%':
        cout<<"Remainder of two numbers are: "<<num1 % num2<<endl;
        break;
    }

    return 0;
}