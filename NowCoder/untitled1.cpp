//https://ac.nowcoder.com/acm/contest/140235/B 
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
	int n;
	cin>>n;
	vector<ll> a(n),b(n+1);
	
	ll c=-1e9-1;
	int sum = 0;
	ll m = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>c)
		{
			c = a[i];
			sum++;
			b[sum] = i;
			if(sum>1) m = max(b[sum]-b[sum-1],m);
		}
	}
	cout<<sum<<" "<<m<<"\n";
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


