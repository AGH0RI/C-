#include <iostream>


using namespace std;


int main()
{

	int n,c=0,max=0;
	cin>>n;
	int candles[n];
	for (int i = 0; i < n; i++)
	{
		cin>>candles[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(candles[i]>max)
			max=candles[i];
	}
	for (int i = 0; i < n; i++)
	{
		if(candles[i]==max)
			c=c+1;
	}
	cout<<c;
	return 0;
}