#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
        sum+=arr[i];
    }
cout<<"Sum of array elements are: "<<sum;
}