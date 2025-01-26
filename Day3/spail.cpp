#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int i,j,a=0,b=0;
    cout<<"Enter a String: ";
   // cin>>str;
   getline(cin,str);
 a=str.length();
 cout<<"Length of string is "<<a<<"\n";
    for(i=0,j=a-1;i<(a/2);i++,j--)
    {
       if(str[i]==str[j])
       b++;
    }
if(b==a/2)
cout<<" Palindrome string";
else
cout<<"Not Palindrome string";
}
