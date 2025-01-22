#include<iostream>
using namespace std;
int main()
{
    int a,b,min,i,gcd=0;
    cout<<"Enters numbers to find GCD: ";
    cin>>a>>b;
    if(a<=b)
    min=a;
    else
    min=b;
    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(i>gcd)
            gcd=i;
        }
    }
cout<<"The GCD of "<<a<<" and "<<b<<" is "<<gcd;
}