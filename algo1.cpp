#include <iostream>

using namespace std;

int main()
{
	int n,i;
	cin>>n;
	for (i = 0; i < 2*(n+1); i++)
	{
		cout<<(3*n)+(i*2)<<" ";
	}
	return 0;
}