#include<iostream>
using namespace std;
int main()
{
   int y;
   cout<<"Enter a year to check : ";
   cin>>y;
   if(y%4==0 && y%100!=0 || y%400==0)
   cout<<y<<" is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.";
   else
   cout<<y<<" is not a leap year";
}