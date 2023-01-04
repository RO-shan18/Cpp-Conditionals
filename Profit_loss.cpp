/* Programmer =  Roshan Mehra
Purpose = Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.
Date = 24/10/2022  */

#include<iostream>
using namespace std;

int main(){
    int cost_price , selling_price;

    cout<<"Enter cost price: ";
    cin>>cost_price;
    cout<<"Enter selling price: ";
    cin>>selling_price;

    int profit = selling_price - cost_price;
    int loss = cost_price - selling_price;

    if(profit<0){
        cout<<"loss is: "<<loss;
    }
    else{
        cout<< "Profit is: "<<profit;
    }
    return 0;
}