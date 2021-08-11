// Merge sort 
#include <iostream>
using namespace std;
int count;

void readArray(int *arr, int n)
{
	for(int i=0; i<=n-1; i++)
	{
    	cin>>arr[i];
  	}
}

int merge(int arr[], int p, int q, int r) 
{
	int n1 = q - p + 1;
	int n2 = r - q;
	int L[n1], M[n2];
	for (int i = 0; i < n1; i++)
	{
		L[i] = arr[p + i];
	}
	for (int j = 0; j < n2; j++)
	{
		M[ j] = arr[q + 1 + j];
	}
		
	int i, j, k;
	i = 0;
	j = 0;
	k = p;
	
	while (i < n1 && j < n2) 
	{
		if (L[i] <= M[ j]) 
		{
			arr[k] = L[i];
			i++;
		} else 
		{
			arr[k] = M[ j];
			j++;
		}
		k++;
		++count;
	}
	while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) 
	{
		arr[k] = M[ j];
		j++;
		k++;
	}
}

int mergeSort(int arr[], int l, int r) 
{
	if (l < r) 
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void printArray(int arr[], int size) 
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() 
{
	int n,s;
	cout<<"enter the no of test cases";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		count=0;
		cout<<"enter the size of array ";
		cin>>s;
		int arr[s];
		cout<<"enter array elements";
		readArray(arr,s);
		int c=mergeSort(arr, 0, s-1);
		cout<<"sorted array : ";
		printArray(arr,s);
		cout<<"comparisions : "<<count<<endl;
    }
	return 0;
}
