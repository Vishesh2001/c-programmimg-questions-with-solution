//swtich statement - develop basic calculator using switch statement.
#include<iostream>
using namespace std;
int main()
{
    short int m,n,result,flag=1;
    char op;
    cout<<"enter first number: "<<endl;
    cin>>m;
    cout<<"enter second number"<<endl;
    cin>>n;
    cout<<"enter operator: "<<endl;
    cin>>op;
switch(op)
{
    case '+':
    result=m+n;
    break;
    case '-':
    result=m-n;
    break;
    case '*':
    result=m*n;
    break;
    case '/':
    result=m/n;
    break;
    case '%':
    result=m%n;
    break;
    default:
     flag=0;
     cout<<"operator is not defined";
     break;
}
if (flag)
 cout<<"result-"<<result;

return 0;
}