#include<iostream>
using namespace std;

int main(){
	int l;
	cin>>l;
	while(l--)
	{
		int n;
		cin>>n;
		char ch[n];
		for(int i=0;i<n;i++)
			cin>>ch[i];
		int count[26]={0};
		for(int i=0;i<n;i++)
			count[(int)ch[i]-97]+=1;
		int max=count[(int)ch[0]-97];
		char c=ch[0];
		for(int i=0;i<n;i++)
		{
			if(max<count[i])
			{
				c=i+97;
				max=count[i];
			}
		}
		if(max>1)
			cout<<c<<" "<<max<<endl;
		else
			cout<<"no duplicate present"<<endl;
	}
	return 0;
}
