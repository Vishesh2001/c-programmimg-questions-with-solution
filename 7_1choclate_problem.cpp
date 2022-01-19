#include<bits/stdc++.h>
using namespace std;

int main()
{
int rupee,choclate=0,wrapper=0;
cout<<"enter rupees: ";
cin>>rupee;
if(rupee>0)
{
  choclate=rupee;
  wrapper=choclate;
    int add=0;
    while(wrapper>2)    
    {
        add=wrapper/3;
        wrapper=wrapper%3;
        choclate=choclate+add;
        wrapper=wrapper+add; 
    }
    cout<<"\nchoclates= "<<choclate;
}
else cout<<"no money.";

 
return 0;
}
