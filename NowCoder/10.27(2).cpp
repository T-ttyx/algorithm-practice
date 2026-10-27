//https://ac.nowcoder.com/acm/contest/142115/B
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int c[100010];

void solve()
{
	int k;
	cin>>k;
	unordered_map<string,int> s;
	vector<string> s1;
	string ss;
	for(int i=0;i<k*3;i++)
	{
		cin>>ss;
		++s[ss];
	}
	int N = 1;
	int sum = 0;
	for(const auto&[ss,cnt]:s)
		if(cnt==3)
		{
			s1.push_back(ss);
			sum++;
		}
	if(sum==0){cout<<0;return;}
	cout<<sum<<"\n";
	for(auto it:s1) cout<<it<<" ";
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
