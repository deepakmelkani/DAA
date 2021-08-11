
#include <iostream>
using namespace std;

void readArray(int *arr, int n){
  int i;

  for(i=0; i<=n-1; i++){
    cin>>arr[i];
  }
}

int search(int arr[],int s_index,int e_index ,int element)
{
	while(s_index<=e_index)
	{
		int middle=s_index+(e_index-s_index)/2;
		if(arr[middle]==element)
			return middle;
		if(arr[middle]<element)
			s_index=middle+1;
		else
			e_index=middle-1;
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
		count=search(arr,0,s,key);
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
