/*
problem 1= print all the prime numbers less than equal to given number.
problem 2- print the prime factorization of a number using sieve.
*/
#include<bits/stdc++.h>
using namespace std;

void sieveprime(int n)
{
    int arr[100];
    //we will initialise this array with zeros ie numbers are unmarked.
    for(int i=0;i<=n;i++)
        arr[i]=0;
    //now all nodes are unmarked...we will start marking all node(2-n) starting from i*i upto n
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                arr[j]=1;//marking 
            }
        }

    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<endl;
        }
    }

}
void sievefactoring(int n)
{
    //spf=sma;;est prime factor.
    int spf[100]={0};
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;//initialising the array...spf of each number is itself i.
    }

    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }

    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }




}
int main()
{
    int n;
    cout<<"enter limit: ";
    cin>>n;
    sieveprime(n);
    cout<<"prime factorisation: ";
    sievefactoring(n);


    return 0;

}
