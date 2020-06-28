#include <iostream>
#include <string>


using namespace std;

int main()
{
	int T;
	cin>>T;
	for (int i = 0; i < T; i++)
	{
		int a[3] ={0,0,0},N;
		cin>>N;
		int cust[N],stat=0;
		for (int  j= 0; j < N; j++)
		{
			cin>>cust[j];
			if(cust[j]==5)
			{
				a[0]++;
			}
			else if(cust[j]==10)
			{
				if(a[0]>0)
				{
					a[0]--;
					a[1]++;
				}
				else
					stat++;
			}
			else if(cust[j]==15)
			{
				if(a[1]>0)
				{
					a[1]--;
					a[2]++;
				}
				else if(a[0]>1)
				{
					a[0]=a[0]-2;
					a[2]++;
				}
				else
					stat++;
			}
		}
		if(stat==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}