#include <iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int S,N,c=0;
		cin>>S>>N;
		if(S%2==0)
			c=0;
		else
		{
			c=1;
			S=S-1;
		}
		for(int j=1;j<=N/2;j++)
		{
			int count=S/N,coin=N;
			S=S-(count*N);
			c=c+count;
			coin=coin-2*j;
			if(S==0)
				break;
		}
		cout<<c<<endl;

	}
	return 0;
}