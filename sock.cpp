/**
	Problem Link:
	http://codeforces.com/problemset/problem/782/A
**/

#include <iostream>
using namespace std;

bool sock[100010]={false};

int main() {
	
	int n; cin>>n;
	int count=0;
	int ans=0;
	
	for(int i=1;i<=2*n;++i)
	{
	    int temp; cin>>temp;
	    
	    if(sock[temp] == false)
	    {
	        sock[temp]=true;
	        count++;
	        ans=max(ans,count);
	    }
	    else
	    {
	        sock[temp]=true;
	        count--;
	    }
	}
	
	cout<<ans<<endl;
	
	
	
	return 0;
}
