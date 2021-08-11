#include<bits/stdc++.h>
using namespace std;

void readArray(int *arr, int n)
{
	cout<<"enter the array elements ";
	for(int i=0; i<=n-1; i++)
	{
		cin>>arr[i];
	}
}

bool findDuplicate(int arr[], int n)
{
	int i;
	bool found = false;
	for(i=0; i<=n-1; i++)
	{
		if(arr[i] == arr[i+1])
		{
			found = true;
			break;
		}
	}
	return found;
}

int main()
{
	int loop;
	int n;
	bool found;
	cout<<"enter no of test cases : ";
	cin>>loop;
	for(int i=0; i<=n-1; i++)
	{
		found = false;
		cout<<"enter the size of array ";
		cin>>n;
		int arr[n];
		readArray(arr, n);
		sort(arr, arr+n);
		found = findDuplicate(arr, n);
		if(found)
		{
			cout<<"YES\n";
		}else
		{
			cout<<"NO\n";
		}
	}
}
