#include<iostream>

using namespace std;

int main()
{
	int alice[3],bob[3],pointAlice=0,pointBob=0;
	for (int i = 0; i <= 3;i++)
	{
		cin>>alice[i];
	}
	for (int i = 0; i <= 3;i++)
	{
		cin>>bob[i];
	}

	for (int i = 0; i <= 3;i++)
	{
		if (alice[i]>bob[i])
			pointAlice=pointAlice+1;
		if(alice[i]<bob[i])
			pointBob=pointBob+1;			
	}
	cout<<pointAlice<<" "<<pointBob;
	return 0;
}