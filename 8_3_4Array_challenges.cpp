/*
challenge 1. find maximum till each index (i). in an array.  0<=i<=size.
challenge 2. find sum of all subarrays.
challenge 3. longetst arithematic subarray:  sarasvati has an array of N non negative integers. she want to choose a contigous 
             arithmatic subarray from her array that has the maximum length. find the length of the longest contiguous arithematic 
             subarray.
challenge 4: record breaker: rahul is given the number of visitors at her local theme park on N cosecutive days. the number of visitors 
             on the i-th day is Ai. a day is "record breaking" if ot satisfies both of the following two conditions :
                    1.the numbr of visitors is strictly larger than the number of visitors on each of the preivous dayssss.
                    2. either it is the last day, or the number of visitors on the day is strictly laeger than the number of visitors
                        on the following day.
            output: total number of breaking days.
            time complexity should be O(n) or less.

*/

#include<bits/stdc++.h>
using namespace std;
/*
void challenge_1(int arr[],int size)
{
    int mx=INT_MIN;
    for(int i=0;i<size;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }

}*/
/*
void sum_subarrays(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {   int sum=0;
        for(int j=i;j<size;j++)
        {
            sum+=arr[j];
            cout<<sum << " ";
        }
        cout<<"\n";

    }

}
*/
/*
void longest_ap_array( int arr[], int size)
{
    int max_len=2; // minmum length of AP subarray is 2....as [4 5],[3, 2] are examples of AP subarray. 
    int curr_cd=0;//common difference.
    int prev_cd=arr[1]-arr[0];// prvious common difference...initialized with first common fifference.
    int len=2;//current length.
    for(int i=1;i<size-1;i++)
    {  
       curr_cd=arr[i+1]-arr[i];
            if(prev_cd==curr_cd)
            {
            len++;
            }
            else {
                prev_cd=curr_cd;
                len=2;
            }
            max_len=max(max_len,len);
    }
    cout<<" longest arimatic subarray length is "<<max_len;
}
*/
 void record_breaker(int a[],int size)
 {
     if(size==1)
     {
         cout<<"record breaking days=1"<<endl;
         exit;
     }
    int mx=INT_MIN;
    a[size+1]=INT_MIN;
    int days=0; //maximum number of visitors till  now.
    for(int i=0;i<size;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            days++;
        }
        mx=max(mx,a[i]);
    }
    cout<<"\nrecording breaking days = "<<days;

 }

int main()
{
    int size;
    cout<<" size? ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
        cin>>array[i];
   // challenge_1(array,size);
   // sum_subarrays(array,size);
   // longest_ap_array(array,size);
    record_breaker(array,size);
    return 0;

} 