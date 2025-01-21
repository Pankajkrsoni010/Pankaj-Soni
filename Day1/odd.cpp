#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number to check: ";
  cin>>n;
  if(n%2==0)
  cout<<"Since "<< n <<" is divisible by 2, it is an even number.";
  else
  cout<<"Since "<<n<<" is not divisible by 2, it is an odd number";
}