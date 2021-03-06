#include<bits/stdc++.h>
using namespace std;

void readArray(int *arr, int n)
{
	cout<<"enter the array elements :";
	for(int i=0; i<=n-1; i++)
	{
		cin>>arr[i];
	}
}

int countElement(int arr[], int first, int last, int element)
{
	int elementCount = 0;
	for(int i=first; i<=last-1; i++)
	{
		if(element == arr[i])
		{
			elementCount++;
		}
	}
	return elementCount;
}

int findElement(int arr[], int n, int element)
{
	int elementCount;
	int first, mid, last;
	if(n %2 == 0)
	{
		mid = n/2;
	}else
	{
		mid = (n+1)/2;
	}
	if(element <= arr[mid])
	{
		first = 0;
		last = mid;
		elementCount += countElement(arr, first, last, element);
	}
	if(element >= arr[mid])
	{
		first = mid;
		last = n;
		elementCount += countElement(arr, first, last, element);
	}
	return elementCount;
}

int main(){
	int loop;
	int n, elementCount;
	int element;
	cout<<"enter no of test cases : ";
	cin>>loop;
	for(int i=0; i<=loop-1; i++)
	{
	elementCount = 0;
	cout<<"enter the size of element ";
	cin>>n;
	int arr[n];
	readArray(arr, n);
	cout<<"enter the element to be search ";
	cin>>element;
	elementCount = findElement(arr, n, element);
	if(elementCount > 0)
	{
		cout<<element<<" - "<<elementCount<<'\n';
	}else
	{
		cout<<"Key not present";
	}
	}
	return 0;
}
