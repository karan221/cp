#include <bits/stdc++.h>
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;	cin >> t;
    while(t--)
    {
        int n;	cin >> n;
        int ans = (1 << 30) - 1;
        int a[n];   for(int &x: a)  cin >> x, ans &= x;
        cout << ans << '\n';
    }
}