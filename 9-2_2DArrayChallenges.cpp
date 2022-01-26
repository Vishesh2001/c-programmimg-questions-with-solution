/*
challenge 1= matrix transpose.
challenge 2= multiplication of two matrices.
challnege 3= given a n x m matrix . write an algorithm to find that the given value exist in the matrix or not.
             integers in each row are stored in ascending order from left to right.
             integers in each col are stored in ascending order from top to bottom.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row1,col1;
    cout<<"enter rows: ";
    cin>>row1;
    cout<<"\nenter columns: ";
    cin>>col1;
    int arr[row1][col1];
    cout<<"\n enter elements of the arrrays: ";
    for (int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nmatrix is\n";
    for (int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"/ntransposed matrix is: ";
     for (int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
//multiplication

    int row2,col2;
    cout<<"enter rows: ";
    cin>>row2;
    cout<<"\nenter columns: ";
    cin>>col2;
    int arr2[2][col2];
    cout<<"\n enter elements of the arrrays: ";
    
    for (int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"\nmatrix is\n";
    for (int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    int C[row1][col2];
    if(col1 != row2)
    {
        cout<<"multiplication is not possible.";
        return 0;
    }
    
    else
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                C[i][j]=0;
                for(int k=0;k<row1;k++)
                {
                    C[i][j]=C[i][j]+arr[i][k]*arr2[k][j];
                }
            }
        }
    }
    cout<<"\nmultiplied matrix is:\n ";
    for (int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
//element searching
    int target;
    cout<<"\nelement to search :";
    cin>>target;
    int r=0,c=col1-1;
    while(r<row1 and c>=0)
    {
        if(arr[r][c]==target)
        {
            cout<<"found";
            return 0;
        }
        else if( arr[r][c]>target)
        c--;
        else r++;
    }
    cout<<"not found";



    return 0;
}
