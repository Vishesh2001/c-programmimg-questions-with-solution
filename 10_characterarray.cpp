/*
concept of null character at the end.
checking palindrome string 
largets word in a line.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   

    //checking palindrome;
char name[10];
int size,check=0;
cout<<"name?";
cin>>name;
cout<<"size?";
cin>>size;


for(int i=0;i<=size/2;i++)
    if(name[i]!=name[size-i-1])
    {
    cout<<"notpalindrome";
    return 0;
    }
    else check=1;

if (check==1)
    cout<<"palindrome";
//finding longest word size in a line.

int len=0,max=0,i=0;
char line[100];
cout<<"enter line ";
cin.getline(line,100);
while(line[i] !='\0')
{
    if(line[i]==' ')
    {
        len=0;
        i++;
        continue;
    }
    else
    {
        len++;
        i++;
     if(len>max)
        max=len;
    }
}
cout<<"longest word size: "<<max;



 return 0;   
}