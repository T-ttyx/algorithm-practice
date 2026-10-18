//https://ac.nowcoder.com/acm/contest/141877/C
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	int n,p;
	cin>>n>>p;
	vector<ll> l(n+1),r(n+1);
	vector<ll> ls,rs;
	for(int i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
		ls.push_back(l[i]),rs.push_back(r[i]);
	}
	sort(ls.begin(),ls.end());
	sort(rs.begin(),rs.end());
	
	auto get_d = [&](ll x){
		int cnt_l = upper_bound(ls.begin(),ls.end(),x)-ls.begin();
		int cnt_r = lower_bound(rs.begin(),rs.end(),x)-rs.begin();
		return cnt_l-cnt_r;
	};
	int ans = 0;
	
	for(int i=0;i<n;i++)
	{
		int dl = get_d(l[i]);
		int dr = get_d(r[i]);
		if(abs(dl-dr)>=p) ans++;
	}
	cout<<ans;
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
