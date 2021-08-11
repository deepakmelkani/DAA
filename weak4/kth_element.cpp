#include<iostream>
using namespace std;

void readArray(int *arr, int n)
{
	for(int i=0; i<=n-1; i++)
	{
		cin>>arr[i];
	}
}

void kthLargestElement(int arr[],int size,int k)
{
	int temp;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"kth element is : "<<arr[size-k]<<endl;
}
int main()
{
	int n,s,k;
	cout<<"enter the no of test cases";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		
		cout<<"enter the size of array ";
		cin>>s;
		int arr[s];
		cout<<"enter array elements";
		readArray(arr,s);
		cout<<"enter the kth location : ";
		cin>>k;
		kthLargestElement(arr,s,k);
    }
    return 0;
}
