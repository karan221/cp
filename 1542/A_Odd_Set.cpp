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
        int a[n + n];
        int odd = 0, even = 0;
        for(int &x: a)  
        {
            cin >> x;
            if(x & 1)
                odd ++;
            else
                even ++;
        }
        if(odd == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}