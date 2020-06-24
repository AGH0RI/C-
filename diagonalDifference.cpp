#include <iostream>


using namespace std;

int main()
{
	int n,j,diff,sumOfDiagonal1=0,sumOfDiagonal2=0;
	cin>>n;
	int matrix[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		sumOfDiagonal1=sumOfDiagonal1+ matrix[i][i];
	}

	for (int i = 0; i < n; i++)
	{
		j=(n-1)-i;
		sumOfDiagonal2=sumOfDiagonal2+ matrix[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<sumOfDiagonal1<<" - "<<sumOfDiagonal2;
	diff=sumOfDiagonal1 - sumOfDiagonal2;
	if(diff<0)
		diff=-diff;
	cout<<"Diff is : "<<diff;
	return 0;
}