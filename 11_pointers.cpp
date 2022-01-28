

#include<bits/stdc++.h>
using namespace std;

int swap(int *a,int *b )
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int increment(int a)
{

++a;

}

int main()
{   
    int x=50;
    int *p=&x;//poinnter to variable.
    int **q=&p;//pointer to a pointer.
    cout<<x<<" "<<*p<<" "<<**q<<endl;
    int a=2,b=4;
    increment(a);
    cout<<"a= "<<a<<endl;
    cout<<"before swapping: ";
    cout<<"a "<<a<<" b "<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping: "<<endl;
    cout<<"a "<<a<<" b"<<b;
    return 0;
}