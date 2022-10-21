#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,c=1,arr[10000];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n==1)
		cout<<1<<endl;
		else
		{
			for(int i=1;i<n;i++)
			{
				if(arr[i]<=arr[i-1])
				c++;
			}
			cout<<c<<endl;
		}
	}
	return 0;
}
