#include<iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2, i,j, a[10][10], b[10][10];
    cout<<"Enter rows and columns of first matrix:";
    cin>>r1 >>c1;

    cout<<"Enter rows and columns of second matrix:";
    cin>>r2 >>c2;

    while(c1 != r2)
    {
        cout<<"Error! column of first matrix and the row of second matrix must be same.

        cout<<"Enter rows and columns of first matrix:";
        cin>>r1 >>c1;

        cout<<"Enter rows and columns of second matrix:";
        cin>>r2 >>c2;
    }
    // Storing element of first matrix.
    cout<< "Enter element of first matrix:";
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
        {
            cout<<"Enter element a"<<i+1 <<j+1 <<" : ";
            cin>> a[i][j];
        }
    // Storing elements of second matrix.
    cout<<"Enter element of second matrix:";
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
        {
            cout<<"Enter element a"<<i+1 <<j+1 <<" : ";
            cin>> b[i][j];
        }

    return 0;
}
