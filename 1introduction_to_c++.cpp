// program to find the maximum of given three numbers 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max=0;
    cout<<"enter the values of a, b, c";
    cin>>a>>b>>c;
    if (a>b)
    {
        if(a>c)
        cout<<a<<"is maximum"<<endl;
        else 
        cout<<c<<"is maximum"<<endl;  
    }
    else
    {   if(b>c)
        cout<<b<<"is maximum"<<endl;
        else 
        cout<<c<<"is maximum"<<endl;
        }
return 0;
}