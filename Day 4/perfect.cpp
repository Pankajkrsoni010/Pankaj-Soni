#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n/2;i++)
    if(n%i==0)
    {
    s+=i;
    if(i<n/2)
    cout<<i<<"+";
    else
    cout<<i<<"="<<s;
    }
    if(s==n)
    cout<<"\n Perfect number";
    else
    cout<<"\n Not a perfect number";
}