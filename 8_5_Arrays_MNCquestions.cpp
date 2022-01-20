/*
question 1: 

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int count[size];
    int min_idx=INT_MAX;
    for(int i=0;i<size;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        if(count[arr[i]]!=0)
        {
            min_idx=min(min_idx,count[arr[i]]);
        }
        else
        {
            count[arr[i]]=i;
        }
    }
    if(min_idx==-1)
    {
        cout<<"-1"<<endl;

    }
    else
    cout<<min_idx+1;


    return 0;
}