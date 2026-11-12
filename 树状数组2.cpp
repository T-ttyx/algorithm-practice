//https://www.luogu.com.cn/problem/P3368
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 500005;
int tree[N];
int n,m;
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
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		add(i,a[i]-a[i-1]);
	}
	for(int i=0;i<m;i++)
	{
		int op;
		cin>>op;
		if(op==1)
		{
			int x,y,k;
			cin>>x>>y>>k;
			add(x,k);
			if(y+1<=n) add(y+1,-k);
		}else
		{
			int x;
			cin>>x;
			cout<<query(x)<<"\n";
		}
	}
	
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
