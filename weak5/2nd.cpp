#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l;
	cin>>l;
	while(l--)
	{
		int n,no;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>no;
		sort(a,a+n);
		int f=0;
		int x=0;
		int r=n-1;
		while(x<r)
		{
			if(a[x]+a[r]==no)
			{
				cout<<a[x]<<" "<<a[r];
				f=1;
				break;
			}else if(a[x]+a[r]<no){
				x++;
			}else{
				r--;
			}
		}
		if(f==0)
		{
			cout<<"no such pair";
		}
		cout<<endl;
	}
	return 0;
}
