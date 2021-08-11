// Quick sort 
#include <iostream>
using namespace std;
int count=0;
int shifts=0;

void readArray(int *arr, int n)
{
  for(int i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}
void swap(int *a, int *b) 
{
	int t = *a;
	*a = *b;
	*b = t;
	shifts++;
}

void printArray(int array[], int size) 
{
	for (int i = 0; i < size; i++)
	cout << array[i] << " ";
	cout << endl;
}

int partition(int array[], int low, int high) 
{
	int pivot = array[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) 
	{
		if (array[ j] <= pivot) 
		{
			i++;
			swap(&array[i], &array[ j]);
		}
		count++;
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void quickSort(int array[], int low, int high) 
{
	if (low < high) 
	{
		int pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}

int main() 
{
	int n,s;
	cout<<"enter the no of test cases";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		count=shifts=0;
		cout<<"enter the size of array ";
		cin>>s;
		int arr[s];
		cout<<"enter array elements";
		readArray(arr,s);
		quickSort(arr, 0, s - 1);
		cout<<"sorted array : ";
		printArray(arr,s);
		cout<<"comparisions : "<<count<<"\n"<<"shifts : "<<shifts<<endl;
    }
    return 0;
	
}

