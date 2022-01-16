#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    a=2;
    float b=45.544;
    char c='t';
    bool d=1;
    short int si;
    long int f;
    cout<<"size of int: "<<sizeof(a)<<endl;
    cout<<"size of float: "<<sizeof(b)<<endl;
    cout<<"size of char: "<<sizeof(c)<<endl;
    cout<<"size of bool: "<<sizeof(d)<<endl;
    cout<<"size of short int : "<<sizeof(si)<<endl;
    cout<<"size of long int: "<<sizeof(f)<<endl;
    return 0;
}