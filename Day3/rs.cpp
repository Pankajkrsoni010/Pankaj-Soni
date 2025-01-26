#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str,rev;
    int i,j,a;
    cout<<"Enter a string: ";
    getline(cin,str);
    a=str.length();
    cout<<"length of string is: "<<a<<"\n";
    for(i=a-1,j=0;i>=0;i--,j++)
    rev[j]=str[i];
    cout<<"Reversed string is: "<<rev;
}