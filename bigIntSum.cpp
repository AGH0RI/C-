#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     long long int arr[n],size=sizeof(arr)/sizeof(long long int);
    for (int i = 0; i < size; i++)
      {
          cin>>arr[i];
      }  
    long long int sum=0;
    cout<<sum;
    for (int i = 0; i < n; i++)
    {
        sum=sum + arr[i];
    }
    cout<<sum;

    return 0;
}