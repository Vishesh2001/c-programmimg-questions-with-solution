/* jump statement 
problem-1. print numbers from 1-100 except number divisible by 3
        2. checking a number prime or not*/
#include<iostream>
using namespace std;
int main()
{ 
    for (int i=1;i<=100;i++)
   {
    if(i%3==0)
    {continue;}
    cout<<i<<"\n";
   }
   
   //prime number checking
   int num,i;
   cout<<"enter a number to check if it is prime or not: ";
   cin>>num;
   for( i=2;i<num;i++)
   {
       if(num%i==0)
       break;
   }
   if(i==num)
   {cout<<"prime number";}
   else cout<<"not prime";
   

    return 0;
}
