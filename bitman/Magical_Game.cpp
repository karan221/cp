#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int x = __builtin_popcount(n);
		if(x & 1)	cout << "Non-Magical\n";
		else cout << "Magical\n";
	}
}