#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cout<<"Enter number of elements in the sequence: ";
    cin>>n;
    int a[n];
    cout<<"Now enter the elements: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    j=a[0];
    for(i=0;i<n;i++)
    {
if(j==a[i])
{
    if(j==a[n-1] && c==0)
    cout<<"No term is missing";
j++;
}
else
{
cout<<j<<"\t";
j+=2;
c++;
}
    }
}
