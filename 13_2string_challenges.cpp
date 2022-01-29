/*
string challenges.
challenge 1=convert the string into uppercase format.
challenge 2=maximum occured character in the string
challenge 3=form the biggest number from the numeric string.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cout<<"enter a string :  ";
    cin>>str;
//converting to uppercase
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
//converting to lowercase
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
    cout<<str<<endl;

// converting to uppercase using function
transform(str.begin(),str.end(),str.begin(),::toupper);
cout<<str<<endl;
// converting to lowercase using function
transform(str.begin(),str.end(),str.begin(),::tolower);
cout<<str<<endl;


//form the biggest number from the numeric string.
string num;
cout<<"enter a number; ";
cin>>num;
cout<<"biggest number possible is";
sort(num.begin(),num.end(),greater<int>()) ;//greater<int> for desscending order.
cout<<num;



//maximum occured character in the string.
string str;
cout<<"enter string ";
cin>>str;
int freq[26];
for(int i=0;i<26;i++)
{
    freq[i]=0;
}
for(int i=0;i<str.size();i++)
{
    freq[str[i]-'a']++;
}
char ans='a';
int max=0;

for(int i=0;i<26;i++)
{
    if(freq[i]>max)
    {
        max=freq[i];
        ans=i+'a';
    }
}
cout<<max<<" "<<ans;

    return 0;
}
