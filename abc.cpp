//Exercise 1
// Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. 
// There are also two integer pointers named ptrA and ptrB. 
// Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

#include <iostream>
using namespace std;

int main(void)
{
    int a{0}, b{0};

    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;

    cout<<"a : "<<a <<" b : "<<b <<endl;

    int *ptra, *ptrb;

    ptra = &a;
    ptrb = &b;

    cout<<"ptra as assigned to a : "<<*ptra<<endl;
    cout<<"ptrb as assigned to b : "<<*ptrb<<endl;

    return 0;
}