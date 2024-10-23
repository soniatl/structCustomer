//
//  main.cpp
//  structCustomers
//
//  Created by Sonia Lopchan on 10/21/24.
//
#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

int main(){
    
    Customer customer;// Customer data type, customer variable
    
    cout <<"Enter customer ID: ";
    cin >> customer.id;

    cout <<"Enter name: ";
    cin.ignore();
    getline(cin,customer.name);
    
    cout <<"Enter email address: ";
    cin >> customer.emailAddress;
    
    //outputs in order 
    cout<<customer.id<<"\n";
    cout<<customer.name<<"\n";
    cout<<customer.emailAddress<<endl;

    return 0;
}

