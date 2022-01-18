#include<iostream>
using namespace std;
int main()
{
/*
12345
1234
123
12
1
*/
cout<<"1.\n";
for (int i=5;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;
/*
0-1 pattern hint : sum of indices/2=0?1:0
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/  
cout<<"2.\n"; 
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=i;j++)
    {
    if((i+j)%2==0)
    cout<<"1 ";
    else cout<<"0 ";
    }
cout<<endl;
}

/*
rhombus pattern
    ^^^^^
   ^^^^^
  ^^^^^
 ^^^^^
^^^^^
*/
cout<<"3.\n";
for(int i=5;i>0;i--)
{
    for(int j=i-1;j>=0;j--)
    {cout<<" ";
    }
    for(int j=1;j<=5;j++)
    {cout<<"^ ";
    }
    cout<<endl;
}
cout<<endl;
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5 
*/
cout<<"4.\n";
for(int i=1;i<=5;i++)
{
    for(int j=5-i;j>0;j--)
    {
        cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<k<<" ";
    }
    cout<<endl;

}
cout<<endl;

/*
palindromic pattern
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5    
*/
cout<<"5.\n";
for(int i=1;i<=5;i++)
{
    for(int j=2*(5-i);j>0;j--)
    {cout<<" ";
    }
    for(int k=i;k>=1;k--)
    {cout<<k<<" ";
    }
    for(int k=2;k<=i;k++)
    {cout<<k<<" ";
    }
    cout<<endl;

}
cout<<endl;
/*
diamond/star pattern

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        * 
*/
cout<<"7\n";
for(int i=1;i<=5;i++)
{
    for(int j=2*(5-i);j>0;j--)
    cout<<" ";

    for(int k=1;k<=(2*i-1);k++)
    cout<<"* ";

    cout<<endl;
}
for(int i=5;i>=1;i--)
{
    for(int j=2*(5-i);j>0;j--)
    cout<<" ";

    for(int k=1;k<=(2*i-1);k++)
    cout<<"* ";

    cout<<endl;
}
cout<<endl;
/* Zig-Zag pattern

    *      *
  *   *  *   *
*      *       *

*/
cout<<"8\n";
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=9;j++)
    {
        if((i+j)%4==0 || ((i==2) && (j%4==0)))
        cout<<"* ";
        else cout<<"  ";
    }
    cout<<endl;
}



return 0;
}