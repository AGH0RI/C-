#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double p=0.000000,m=0.000000,z=0.000000;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}

	for (int i = 0; i < n; i++)
	{
		if(arr[i]>0)
			p=p+1;
		else if(arr[i]<0)
			m=m+1;
		else if(arr[i]==0)
			z=z+1;		
	}
	cout<<fixed;
	cout<<setprecision(6)<<p/n<<endl<<m/n<<endl<<z/n;
	return 0;
}