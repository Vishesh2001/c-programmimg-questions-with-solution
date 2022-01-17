/*program to apply if else statement and nested if else statement.
 situtation - 1.take age and check the opportunities.
              2.maximum of three numbers using if else .
              3. number is even or odd*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age<13)
    {
        cout<<"you are a young boy , do study\n";
    }        
    else if(age<20)
    {
        cout<<"you are a teenager\n";
        if(age>17)
        cout<<"you are eligible for voting according to consitution of india.\n";
        else
        cout<<"you are not elsigible for voting.\n";
    }
    else{
        cout<<"you are adult\n";
        if(age>21)
        {cout<<"you are eligible for marriage\n";}
        else cout<<"you r not eligible for marriage\n";
    }
    


    short int a,b,c,max;
    cout<<"\nenter the value of 1st number a=: ";
    cin>>a;
    cout<<"\nenter the value of 2nd number b=: ";
    cin>>b;
    cout<<"\nenter the value of 3rd number c=: ";
    cin>>c;
    max=a;
    if (b>max)
    {
        if(b>c)
        max=b;
        else max=c;
    }
    if(c>max)
    max=c;
    
    cout<<"\n maximum is: "<<max;


    short int num;
    cout<<"enter any positive integer: "<<endl;
    cin>>num;
    if(num%2==0)
    cout<<"even";
    else cout<<"odd";
    return 0;
}
