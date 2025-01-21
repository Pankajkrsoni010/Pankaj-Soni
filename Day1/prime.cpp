#include<iostream>
using namespace std;
int main()
{
    int n,i,f=0;
    cout<<"Enter a number to check: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        f++;
    }
    if(f==2)
    cout<<n<<" has no divisors other than 1 and itself, so it is a prime number.";
    else
    cout<<n<<" has divisors other than 1 and itself, so it is not a prime number.";
}