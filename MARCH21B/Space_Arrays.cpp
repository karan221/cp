#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n];	for(int &x: a)	cin >> x;
		sort(a, a + n);
		int s = 0, i;
		for(i = 0; i < n; i ++) {
			if(i + 1 < a[i]) break;
			s += i + 1 - a[i];
		}
		if(i < n or !(s & 1))	cout << "Second\n";
		else					cout << "First\n";
	}
}