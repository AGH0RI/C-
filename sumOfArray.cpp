#include <iostream>


using namespace std;
int main()
{
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }  
    int sum=0,size=sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        sum=sum + arr[i];
    }
    cout<<sum;

    return 0;
}