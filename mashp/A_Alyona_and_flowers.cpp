#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;	cin >> n >> m;
	int a[n];	for(int &x: a)	cin >> x;
	int ans = 0;
	for(int i = 0; i < m; i++) {
		int x = 0;
		int l, r;	cin >> l >> r;
		l--;
		for(int i = l; i < r; i++) {
			x += a[i];
		}
		if(x > 0)	ans += x;
	}
	cout << ans;
}