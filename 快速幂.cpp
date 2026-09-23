//https://www.luogu.com.cn/problem/P1226
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll ebs(ll a,ll b,ll p)
{
	ll res = 1;
	while(b)
	{
		if(b&1) res = res*a%p;
		a = a*a%p;
		b>>=1;
	}
	return res;
}
void solve()
{
	ll a,b,p;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<ebs(a,b,p);
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
