#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1;
    cout<<"Enter number to find Factorial: ";
    cin>>n;
    cout<<n<<"! is  ";
    for(i=n;i>0;i--)
   {
    cout<<i;
   if(i>1)
   cout<<"*";
    f*=i;
    }
     cout<<" = "<<f;
}