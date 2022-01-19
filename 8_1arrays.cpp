//find maximum and minimum from an array;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min,max,size;
    cout<<"enter the the size of array: ";
    cin>>size;
    cout<<"enter the elements of the array\n";
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    
    max=INT_MIN;//min possible value in C++ defined under <climits>.
    min=INT_MAX;//max possible value in C++
    int j=1;
    while(arr[j])
    {
        if(arr[j]>max)      //maxNo=max(maxNo,arr[j])
            max=arr[j];     
       //minNo=min(minNo,arr[j]) can be used.
        if(arr[j]<min)
            min=arr[j];
        j++;
    }
    cout<<"\nmaximum of array: "<<max;
    cout<<"\nminimum of array: "<<min;
    
    return 0;

}