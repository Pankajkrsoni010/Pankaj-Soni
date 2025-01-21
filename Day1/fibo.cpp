#include<iostream>
using namespace std;
int main()
{
    int n,z;
    cout<<"Enter a number upto which we have to find the fibonaccie series: ";
    cin>>n;
    int a=0,b=1;
    for(z=0;z<=n;z=a+b)
    {
        cout<<"\t"<<z;
         a=b;
         b=z;
    }
}