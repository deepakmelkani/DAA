//linear search->is also known as sequential search
#include <iostream>
using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int search(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}
int main(void)
{
	int arr[50],n,s,key,count;
	cout<<"enter the no of test cases";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		count=-1;
		cout<<"enter the size of array ";
		cin>>s;
		cout<<"enter array elements";
		readArray(arr,s);
		cout<<"enter the element to be search ";
		cin>>key;
		count=search(arr,s,key);
		if (count==-1)
		{
			cout<<"not present\n";
		}else
		{
			cout<<"present "<<count<<"\n";
		}
    }
    return 0;
}
