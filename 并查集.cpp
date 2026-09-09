#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+10;
int e[N],ne[N];

int find(int x)
{
	if(e[x]==x) return x;
	else
	{
		e[x]=find(e[x]);
		return e[x];
	}
	//return e[x] == x?x:e[x] = find(e[x]);
	//路径压缩
}
void unite(int x,int y)
{
	if(find(x)==find(y)) return;
	if(find(x)<find(y))
	{
		e[find(y)] = find(x);
		ne[find(x)]+=ne[find(y)];
	}else
	{
		e[find(x)] = find(y);
		ne[find(y)]+=ne[find(x)];
	}
	return;
}

void solve()
{
	int n,m,z;
	int x,y;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		e[i] = i;
		ne[i] = 1;
	}
	for(int i=0;i<m;i++)
	{
		cin>>z>>x>>y;
		if(z==1) unite(x,y);
		else
		{
			if(find(x)==find(y)) cout<<"Y\n";
			else cout<<"N\n";
		}
	}
	
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
