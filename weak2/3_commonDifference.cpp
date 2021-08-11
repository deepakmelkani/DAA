#include<bits/stdc++.h>
using namespace std;

void readArray(int *arr, int n)
{
	cout<<"enter the array elements : ";
	for(int i=0; i<=n-1; i++)
	{
		cin>>arr[i];
	}
}

int findDifference(int arr[], int n, int key)
{
	int k=2;
	int diffCount=0;
	for(int i=n-1; i>=1; i--)
	{
		for(int j=0; j<=n-k; j++)
		{
			if(abs(arr[i] - arr[j]) == key)
			{
				diffCount++;
			}
		}
		k++;
	}
	return diffCount;
}

int main()
{
	int loop;
	int n;
	int key;
	int diffCount;
	cout<<"enter no test cases : ";
	cin>>loop;
	for(int i=0; i<=loop-1; i++)
	{
		cout<<"enter the size of array ";
		cin>> n;
		int arr[n];
		readArray(arr, n);
		cout<<"enter the element to be search ";
		cin>>key;
		diffCount = findDifference(arr, n, key);
		if(diffCount > 0)
		{
			cout<<diffCount<<'\n';
		}else
		{
			cout<<"No pair found\n";
		}
	}
	return 0;
}
