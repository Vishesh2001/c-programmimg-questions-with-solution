/*
1. program to chech a number is prime or not.
2. program to find the reverse of a number.
3. program to check a number is armstrong number or not.
4. factorial of a number;
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    /*short int number,i=0;
    cout<<"enter a number to check prime : ";
    cin>>number;
    for (i=2;i<=sqrt(number);i++)
    {
        if((number%i)==0)
        {
            break;
        }
    }
    if(i==sqrt(number))
    {
        cout<<number<<"is prime ";
    }
    else cout<<number<<" is not prime.";
    */
   // reverse of a number
/*   short int num,last_digit,rev=0;
   cout<<"enter a number to find the reverse : ";
   cin>>num;
    while(num>0)
    {
        last_digit=num%10;
        rev=rev*10 + last_digit;
        num=num/10;

    }
    cout<<"\n "<<rev;
*/
    // armstrong number
/*
int n,sum=0,last,temp;
    cout<<"enter a number to check armstrong : ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        last=n%10;
        sum= sum + last*last*last;
        n=n/10;
    }
    if(sum==temp)
    cout<<"\narmstrong";
    else cout<<"\n not armstrong";
*/
// factorial of a number.
int fact=1,num;
cout<<"enter a number to find factorial : ";
    cin>>num;
    while(num>0)
    {
        fact=fact*num;
        num--;
    }
    cout<<"\n factorial of "<<num<<" is "<<fact;



   
    return 0;
}