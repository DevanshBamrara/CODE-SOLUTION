#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mini = a[0], maxi = a[0];
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
            if (maxi - mini > 2 * x)
            {
                ans++;
                mini = maxi = a[i];
            }
        }
        cout<<ans<<endl;
    }
}