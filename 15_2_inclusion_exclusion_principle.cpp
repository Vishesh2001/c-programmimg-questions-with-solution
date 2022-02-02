/*
problem 1- how many numbers between 1 and 1000 are divisible by 5 or 7?
problem 2- euclid algorithm to find gcd.
*/
#include<bits/stdc++.h>
using namespace std;

int divisible(int limit,int a,int b)
{
    int c1=limit/a;
    int c2=limit/b;
    int c3=limit/(a*b);
    return (c1+c2-c3);
}

int gcd(int a,int b)
{
    int rem;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    int limit,a,b,c,d;
    cout<<"limit?,a?,b?:";
    cin>>limit>>a>>b;
    int result=divisible(limit,a,b);
    cout<<"\n"<<result;
    cout<<"a,b?";
    cin>>c>>d;
    result=gcd(c,d);
    cout<<result;
return 0;
}