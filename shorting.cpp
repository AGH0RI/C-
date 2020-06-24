#include <iostream>
#include <string>

using namespace std;

void selectionSort()
{
	int arr[] = {5,4,1,3,2};
	int temp,size=sizeof(arr)/sizeof(int),minIndex;

	cout<<"Unshorted array is : ";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<size-1;i++)
	{
		minIndex=i;
		for (int j = i+1; j < size; j++)
		{
			if (arr[minIndex]>arr[j])
			{
				minIndex=j;
			}
		}
		temp=arr[minIndex];
			arr[minIndex]=arr[i];
			arr[i]=temp;
	}
	cout<<"\nShorted array is : ";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
}


void bubbleSort()
{
	int arr[] = {5,4,1,3,2,7,6};
	int temp,size=sizeof(arr)/sizeof(int),minIndex;

	cout<<"Unshorted array is : ";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<size-1;i++)
	{
		minIndex=i;
		for (int j = 0; j < size-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nShorted array is : ";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
}

void insertionSort()
{
	int arr[] = {5,4,1,3,2,7,6};
	int temp,size=sizeof(arr)/sizeof(int),minIndex;

	cout<<"Unshorted array is : ";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<size-1;i++)
	{
		minIndex=i;
		for (int j = i+1; j < size; j++)
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
	cout<<"\nShorted array is : ";
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	insertionSort();
	cout<<endl;

	return 0;
}