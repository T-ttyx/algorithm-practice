//https://ac.nowcoder.com/acm/contest/141877/A
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		if(a[i]%2!=0) x -= 1;
		else x++;
	}
	cout<<x;
	
}

int main()
{
	ios::sync_with_stdio();
	cin.tie(0),cout.tie(0);
	
	int T;
	T=0;
	//cin>>T;
	
	solve();
	
	return 0;
}
