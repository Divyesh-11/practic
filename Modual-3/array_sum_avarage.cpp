/*
5. Arrays and Strings
1. Array Sum and Average 
   o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
*/
#include<iostream>

using namespace std;

int main(){

    int size,a[100],b[100],ans[100],sum=0;

    cout<<"\nEnter the size of an array = ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"\nEnter the element of an array a["<<i<< "] = ";
        cin>>a[i];
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<"\nEnter the element of an array b["<<i<<"] = ";
        cin>>b[i];
    }

    for (int i = 0; i < size; i++)
    {
        ans[i] = a[i] + b[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"\nThe array addtion  = "<<ans[i];
    }
    for ( int i = 0; i < size; i++)
    {
        sum += ans[i];
    }
    cout<<"\nThe addtion of array = "<<sum;
    
    cout<<"\nThe avrage of aaray = "<<(float)sum/(float)size;
    
    return 0;
}