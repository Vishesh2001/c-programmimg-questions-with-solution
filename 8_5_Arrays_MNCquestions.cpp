/*
question 1- given an array[] of size N. the task is to find the first repeating element in the array of integer, 
            i.e, an element that has occurs more than once and whose index of the first occurrence is smallest.
question 2- given an unsorted array A of size N of non negative integers, find a continous subarray which adds to a given number S.
            i/p= N=5 S=12
            A[]={1,2,3,7,5}
            o/p= 2 4 {bcz 2nd+3rd+4th= 2+3+7=12}
question 3- smallest positive missing number.
            you are given an array arr[] of N integers including 0, the task is to find the smallest positive number missing from the 
            array.    eg arr[]={0,-9,1,3,-4,5}   output = 2
*/

#include<bits/stdc++.h>
using namespace std;

int min_index(int arr[],int size)
{
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
    if(min_idx==INT_MAX)
    {
        return -1;
    }
    else
    return min_idx+1;
}


void given_sum_subarray(int arr[],int size, int S)
{
    int sum=0,low=0,high=0;
    while(high<=size)
    {
        sum=sum+arr[high];
        if(sum<S)
            high++;
        else if(sum==S)
           { cout<<" low "<<low+1<<" high "<<high+1;
                break;
           }
        else 
        {   low++;
            high=low;
            sum=0;
        }
    }
}


int missing_positive_number(int arr[],int size)
{
    int const N= 1e6;//10 to the power 6
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=0;
    }

    //mark the occurence of positive numbers as true.
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0)
        {
            check[arr[i]]=1;
        }
    }

    for(int i=0;i<N;i++)
    {
        if(check[i]!=1)
        return i+1;
    }
    return 0;

}
int main()
{
    int size,sum,min;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nenter sum= ";
    cin>>sum;
    int ans=min_index(arr,size);
    cout<<"\n"<<ans;
    given_sum_subarray(arr,size,sum);
    min=missing_positive_number(arr,size);
    cout<<" smallest positive missing number is "<<min;
    return 0;
}
