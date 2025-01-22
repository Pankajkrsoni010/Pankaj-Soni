#include<iostream>
using namespace std;
int main()
{
    int n,i,R=0;
    cout<<"Enter number to check: ";
    cin>>n;
    for(i=n;i>0;i/=10)
    R=R*10+i%10;
    if(R==n)
    cout<<n<<" is Palindrome";
    else
    cout<<n<<" is not Palindrome";
}