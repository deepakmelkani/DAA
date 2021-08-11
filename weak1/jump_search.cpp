#include <iostream>
#include<cmath>
using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int search(int arr[], int n, int element, int *steps)
{
	int left=0,right=sqrt(n);
	while(arr[right]<=element && right<n)
	{
		left=right;
		right+=sqrt(n);
		*steps+=1;
		if(right>n-1)
		{
			right=n;
		}
	}
	
	for(int i=left;i<right;i++)
	{
		if(arr[i]==element)
		{
			*steps+=1;
			return i;
		}
		
	}
	return -1;
}

int main(void)
{
	int n,s,key,count,steps;
	cout<<"enter the no of test cases";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		count=steps=0;
		cout<<"enter the size of array ";
		cin>>s;
		int arr[s];
		cout<<"enter array elements";
		readArray(arr,s);
		cout<<"enter the element to be search ";
		cin>>key;
		count=search(arr, s, key, &steps);
		if (count==-1)
		{
			cout<<"not present"<<steps<<"\n";
		}else
		{
			cout<<"present "<<steps<<"\n";
		}
    }
    return 0;
}
