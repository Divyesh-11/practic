/*
2. Matrix Addition 
o Write a C++ program to perform matrix addition on two 2x2 matrices.
*/
#include<iostream>

using namespace std;

int main(){
    
    int a[100][100],b[100][100],ans[200][200],i,j,row,colm;

    cout<<"\nEnter the row number = ";
    cin>>row;
 
    cout<<"\nEnter the colum number = ";
    cin>>colm;

    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < colm; j++)
        {
            cout<<"\nEnter the element of a["<<i<<"] = ";
            cin>>a[i][j];
        }
    }
    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < colm; j++)
        {
            cout<<"\nEnter the element of b["<<i<<"] = ";
            cin>>b[i][j];
        }
    }
    
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < colm; j++)
        {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }

    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < colm; j++)
        {
            cout<<"\n the addtion of array = "<<ans[i][j];
        }
    }
    
    return 0;
}