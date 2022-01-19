#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    for(int j=0;j<n;j++)
    {
        if(arr[j]==key)
        return j+1;
    }
    return -1;
}
int binary_search(int arr[],int size,int key)
{
    int start=0,last,mid;
    last=size;
    while(start<=last)
    {
        mid=(start+last)/2;

        if(arr[mid]==key)
            return mid+1;
        else if(arr[mid]>key)
            last=mid-1;
        else start=mid+1;    
    }
    return -1;
}
int main()
{

    int size,key;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array: ";
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nenter element to be searched";
    cin>>key;
    int flag;
    flag=linear_search(arr,size,key);
    if(flag==-1)
    {
        cout<<"not found";
    }
    else cout<<"found at "<<flag<<" position";
    cout<<" \n binary search: ";
    flag=binary_search(arr,size,key);
     if(flag==-1)
    {
        cout<<"not found";
    }
    else cout<<"found at "<<flag<<" position";
    return 0;
}

