#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int shift(int a)
{
	int high = (a>>3)&1;
	int res = ((a<<1)&15)|high;
	return res;
}
void solve()
{
	int x;
	ll k;
	cin>>x>>k;
	int cnt = k%4;
	int y = x;
	for(int i=0;i<cnt;i++)
	{
		x = shift(x);
	}
	int count = 0;
	while(y)
	{
		y&=(y-1);
		count++;
	}
	cout<< x <<" "<< count <<"\n";
	
}
int main()
{
	int T;
	cin>>T;
	//T = 1;
	while(T--)
	{
		solve();
	}
	return 0;
}
