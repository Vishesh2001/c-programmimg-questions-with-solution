/*
insertion sort: insert an element from unsorted array to its correct position in sorted array.
*/
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int size)
{
    int current,j;
    for(int i=1;i<size;i++)
    {
        current=arr[i];
        j=i-1;
        while(arr[j]>current && j>=0)  //jb tk previous element bdaa h current se....we will shift.
        {
            arr[j+1]=arr[j];
            j--;
        }

      arr[j+1]=current;  //j+1 becuse...while m j-- extra ho jayega....and we will put current into its right position.
    }

    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
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
        insertion_sort(array,size);
        return 0;

    }
