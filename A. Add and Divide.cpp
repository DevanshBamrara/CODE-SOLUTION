#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX >> 1;
int operations(int a, int b)
{
    if (b == 1)
    {
        return INF;
    }
    int c = 0;
    while (a != 0)
    {
        a /= b;
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mini = operations(a, b);
        int inc = 0;
        while (true)
        {
            inc++;
            int cur = operations(a, b + inc) + inc;
            if (cur > mini)
                break;
            mini = cur;
        }
        cout << mini << endl;
    }
}