//https://ac.nowcoder.com/acm/contest/141877/B
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,k;
	cin>>a>>b>>k;
	int sum = pow(10,k)*a;
	int ave = sum/b;
	int m = pow(10,k);
	cout<<ave/m<<" "<<ave%m;
	
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
