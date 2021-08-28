#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a1[n];
	for(int i=0;i<n;i++)
		cin>>a1[i];
	int m;
	cin>>m;
	int a2[m];
	for(int i=0;i<m;i++)
		cin>>a2[i];
	sort(a1,a1+n);
	sort(a2,a2+m);
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(a1[i]>a2[j])
			j++;
		else if(a2[j]>a1[i])
			i++;
		else{
			cout<<a1[i]<<" ";
			i++;
			j++;
		}
	}
	return 0;
}
