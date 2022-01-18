/*
1. program to find prime numbers between a range of numbers
2. find fibbonacci sequence upto n numbers.
3. find factorial of n
4. calculate bonomisal coefficient nCr.
5. pascal traiangle


*/
#include<iostream>
#include<cmath>
using namespace std;
/*
bool isPrime(int num)
{

    for(int j=2;j<=sqrt(num);j++)
    {if(num% j ==0)
    {
        return false;
    }
    }
    return true;
}
*/
/*
void fib(int n)
{
    int t1=0,t2=1,next=0;
    for (int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return ;

}
*/

int factorial(int n)
{
    int fact=1;
    for (int i=n;i>=1;i--)
    fact=fact*i;

    return fact;
}

int binomialCoefficient(int m,int n)
{   int result;
    result= factorial(m)/(factorial(m-n)* factorial(n));
    return result;
}
int main()
{
 /*  //prime number
    short int n1,n2;
    cout<<"find prime numbers between two numbers\n enter starting index: ";
    cin>>n1;
    cout<<"\nenter last index: ";
    cin>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(isPrime(i))
        cout<<i<<"\n";
    }
*/
/* //fibonacci
int num;
cout<<"enter number till which you want the fibonacci sequence: ";
cin>>num;
fib(num);
*/
//fatorial
   /* int number;
    cout<<"enter number to find the facorial of: ";
    cin>>number;
    factorial(number);
    */

// calculate the binomial coefficient nCr=n!/((n-r)!*r!)
 /*   int n,r,result;
    cout<<"\nenter the value of n: ";
    cin>>n;
    cout<<"\nenter the value of r: ";
    cin>>r;
    result= factorial(n)/(factorial(n-r)* factorial(r));
    cout<<"\n the answer is :  "<<result;
*/
/*
pascal triangle
1           0C0
1 1         1C0 1C1
1 2 1       2C0 2C1 2C2
1 3 3 1     3C0 3C1 3C2 3C3
1 4 6 4 1   4C0 4C1 4C2 4C3 4C4

*/
    for (int i=0;i<=4;i++)
    {
        for(int j=0;j<=i;j++)
        {cout<< binomialCoefficient(i,j)<<" ";}
        cout<<endl;
    }
    return 0;

}