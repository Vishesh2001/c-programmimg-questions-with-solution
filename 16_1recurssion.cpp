#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevsum=n+Sum(n-1);
    return prevsum;
}
int power(int n,int p)
{
    if (p==0)
    {
        return 1;
    }
    int result=n*power(n,p-1);
    return result;
}
int factorial(int n){
    if(n==1)
    {
        return 1;
    }
    int fact=n*factorial(n-1);
    return fact;
}
int fib(int n){
    if(n<2)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    /*int num;
    cout<<"num?"<<endl;
    cin>>num;
    int sum=Sum(num);
    cout<<sum;
    int p;
    cout<<"power/?/: "<<endl;
    cin>>p;
    int result=power(num,p);
    cout<<result;
    int fact;
    cout<<"factorial of? "<<endl;
    cin>>fact;
    fact=factorial(fact);
    cout<<fact<<endl;
   */ int fibn;
    cout<<"fibonacci number?"<<endl;
    cin>>fibn;
    fibn=fib(fibn);
    cout<<fibn;
    return 0;
}