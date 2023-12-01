#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int g1 = abs(a - b) * n;
        int g2 = abs(a + b) * n;
        int w1 = abs(c - d);
        int w2 = abs(c + d);
        if (g1 > w2 || w1 > g2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}