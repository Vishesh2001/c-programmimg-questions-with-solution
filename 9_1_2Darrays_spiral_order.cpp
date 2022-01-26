#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter rows: ";
    cin>>row;
    cout<<"\nenter columns: ";
    cin>>col;
    int arr[row][col];
    cout<<"\n enter elements of the arrrays: ";
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nmatrix is\n";
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"spiral traversal. ";
    int row_start=0;
    int row_end=row-1;
    int col_start=0;
    int col_end=col-1;

    while((row_start<=row_end) && (col_start<= col_end))
    {
        //for starting row
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;
        //for last column
        for(int i=row_start;i<=row_end;i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;
        //for last row
        for(int i=col_end;i>=col_start;i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;
        
        //for first column
        for(int i=row_end;i>=row_start;i--)
        {
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;
    }


    return 0;
}