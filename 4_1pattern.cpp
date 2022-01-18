#include<iostream>
using namespace std;
int main()
{   
    short int row,col,i,j;
    cout<<"enter row: ";
    cin>>row;
    cout<<"\nenter column-";
    cin>>col;
    
    
    /*      * * * * * 
            * * * * *   
            * * * * *
            * * * * *   /
    
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    /*      * * * * * 
            *       *   
            *       *
            * * * * *   
            hollow rectangle /

for (i=1;i<=row;i++)
{ 
    for(j=1;j<=col;j++)
    {
        if(i==1 || i==row || j==1|| j==col)
        {
            cout<<"*";
        }
        else {cout<<" ";}
    }
    cout<<"\n";
}


    /*      * * * * * 
            * * * *    
            * * *
            * *
            *         inverted pyramid   /

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        if((i+j)<row)
         cout<<"*";
         else cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

/*           *
            **
           ***
          ****
         *****        inverted pyramid with 180 degree reotation/


    cout<<"\n";
    for(i=row;i>0;i--)
    {
        for(j=0;j<5;j++)
        { if(j<(i-1))
        cout<<" ";
        else cout<<"*";
        }
        cout<<endl;
    }
    

    /*
    half pyramid using numbers
    1
    22
    333
    4444
    55555 
    /
   for(i=1;i<=row;i++)
   {
       for(j=1;j<=i;j++)
       cout<<i;
    cout<<"\n";
   }
   cout<<"\n";
   /*
    Floyd triangle
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15 
    /
   int k=1;
   for(i=1;i<=row;i++)
   {
       for(j=1;j<=i;j++)
       cout<<k++;
       
    cout<<"\n";
   }
   /
    butterfly pattern

    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
                    */
    
    for(i=1;i<row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*row - 2*i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*row - 2*i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
  
return 0;
}