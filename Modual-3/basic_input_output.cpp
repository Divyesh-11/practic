/*
2. Basic Input/Output
o Write a C++ program that accepts user input for their name and age and then
displays a personalized greeting.
o Objective: Practice input/output operations using cin and cout.
*/
#include<iostream>
using namespace std;
int main()
{
    int age; // declered  varibles
    char name[100]; //declared variables 
    cout<<"\nEnter the name for persone = ";
    cin>>name; // enter the user value is stored this variable
    cout<<"\nEnter the age of persone = ";
    cin>>age; // enter the user value is stored this variable

    cout<<"\nThis persone name is = "<<name; // print the value 
    cout<<"\nThis personr age is = "<<age; // print the value 

    return 0;
}