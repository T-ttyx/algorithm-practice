//https://ac.nowcoder.com/acm/contest/142115/A
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
	string s;
	cin>>s;
	if(s.substr(s.length()-2,2)=="es") 
	{
		s.erase(s.length()-2,2);
	}else if(s[s.length()-1]=='s') 
	{
		s.erase(s.length()-1,1);
	}
	cout<<s;
	
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
