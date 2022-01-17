/*loops in c++- for loop, while loop, do-while loop. 
problems-1 find sum of n numners.
 */
#include<iostream>
using namespace std;
int main()
{
    /*
    int num;
    cout<<"enter any positive integer"<<endl;
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"\n sum of first "<<num<<" number is ="<<sum;
    */
//while loop- take input until input is less 25;
/*
short int input;
cout<<"input a number";
cin>>input;
while (input<25)
{   cout<<input;
    cout<<"\ninput a number\n";
    cin>>input;
}
cout<<"input is greater than 25";
*/
// do while loop- same above example;
short int input;
do{
    cout<<"input a number\n";
    cin>>input;
    cout<<input<<"\n";
}while(input<25);
cout<<"input is greater than 25";
    return 0;
}