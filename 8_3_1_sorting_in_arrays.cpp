/*sorting in arrays.
sorting is a process of ordering the elements in ascending or descending arrays.
types of sorting
1. selection arrays: find the minimum element in the array and replace it with the element at begining.

*/
#include<bits/stdc++.h>
using namespace std;


int selection_sort(int arr[],int size)
{   int temp=0,i=0,j=0;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

   for(int k=0;k<size;k++)
   {
       cout<<arr[k]<<" ";
   }
   return 0;
}

int main()
{
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int a[size];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
   selection_sort(a,size);
 


 
return 0;
}
