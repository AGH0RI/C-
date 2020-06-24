#include <iostream>

using namespace std;

int* sort(int arr[5])
{
	int temp,minIndex;
	for(int i=0;i<5-1;i++)
	{
		minIndex=i;
		for (int j = i+1; j < 5; j++)
		{
			if (arr[minIndex]>arr[j])
			{
				minIndex=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
	return arr;
}
int main()
{
	int arr[5],min=0,max=0;
	for(int i=0;i<5;i++)
		cin>>arr[i];
	sort(arr);
	for (int i = 0; i < 4; i++)
	{
		min=min+arr[i];
	}
	for (int i = 1; i < 5; i++)
	{
		max=max+arr[i];
	}
	cout<<min<<" "<<max;
	return 0;
}