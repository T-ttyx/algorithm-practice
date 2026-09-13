//https://ac.nowcoder.com/acm/contest/140235/A
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
	int a0,a1,a2;
	cin>>a0>>a1>>a2;
	
	int sum = 0;
	if(a1==1) sum += 1;
	if(a2==1) sum += 2;
	cout<<sum;
	
}

int main()
{
	int T;
	//cin>>T;
	T = 1;
	while(T--)
	{
		solve();
	}
	
	return 0;
}
