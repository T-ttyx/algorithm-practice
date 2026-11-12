//https://ac.nowcoder.com/acm/problem/208813
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 200005;
int tree[N];
int n;
int a[N],b[N];

int lowbit(int x)
{
	return x&-x;
}
void add(int i,int k)
{
	while(i<=n)
	{
		tree[i] += k;
		i += lowbit(i);
	}
}
int query(int x)
{
	int sum = 0;
	while(x>0)
	{
		sum += tree[x];
		x -= lowbit(x);
	}
	return sum;
}

void solve()
{
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
	{
		a[i] = lower_bound(b+1,b+n+1,a[i])-b;
	}
	ll ans = 0;
	for(int i=n;i>=1;i--)
	{
		ans += query(a[i] - 1);
		add(a[i],1);
	}
	cout<<ans<<"\n";
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
