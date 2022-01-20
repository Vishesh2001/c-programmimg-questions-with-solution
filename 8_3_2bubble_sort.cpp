/*
bubble sort- time complexity-O(n2)
concept: repeatdly swap adjascent elements if they are in wrong order.
*/
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}


int main()
    {
        int size;
        cout<<"enter the size of array: ";
        cin>>size;
        cout<<"\nenter the elements of the array: ";
        int array[size];
        for (int i=0;i<size;i++)
        {
            cin>>array[i];
        }
        bubble_sort(array,size);
        return 0;

    }
