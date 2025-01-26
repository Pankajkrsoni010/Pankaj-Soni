#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int i,v=0,s=0,c=0;
    cout<<"Enter the string: ";
    getline(cin,str);
for(i=0;i<str.length();i++)
{
    if(str[i]=='a','i','o','u','e')
    v++;
    else if(str[i]==' ')
    s++;
    else
    c++;
}
cout<<"Number of vowels is: "<<v<<"\n";
cout<<"Number of consonants is: "<<c;
}