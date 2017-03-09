/**
	Problem Link:
	http://codeforces.com/problemset/problem/758/A
**/

#include <bits/stdc++.h>

using namespace std;

int burle[110];

int main()
{
	std::ios::sync_with_stdio(false);

	int n; cin>>n;

	if(n==1)
	{
		int temp; cin>>temp;
		cout<<0<<endl;
		return 0;
	}

	int maxito=0;

	for(int i=1;i<=n;++i)
	{
		int temp; cin>>temp;
		if(maxito<temp)
		{
			maxito=temp;
		}
		burle[i]=temp;
	}

	int count=0;

	for(int i=1;i<=n;++i)
	{
		count+= (maxito-burle[i]);
	}
	
	cout<<count<<endl;
	
}
