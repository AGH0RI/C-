#include <iostream>


using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int* ar[n];
	for (int i=0;i<n;i++)    //for array
	{
		int size;
		
		cin>>size;
		ar[i]=new int[size];
		for(int a=0;a<size;a++)
			cin>>ar[i][a];
		cout<<i<<" array : ";
		for(int a=0;a<size;a++)
			cout<<ar[i][a]<<"  ";
		cout<<endl;
	}
	int qry[m][2]; 
	for (int j=0;j<m;j++)    //for qry
	{
		cin>>qry[j][0]>>qry[j][1];
		cout<<"Array : "<<qry[j][0]<<" Index : "<<qry[j][1]<<endl;
	}
	for (int j=0;j<m;j++)
	{
		cout<<"ELEMENT OF THE QUERY : "<<ar[qry[j][0]][qry[j][1]];
	}

	return 0;
}