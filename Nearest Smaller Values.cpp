#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	cin >> n;
	int v[n+1];
	for (int i = 1; i <= n; i++)
	{
		cin>>v[i];
	}
	vector<int> ans;
	stack<int> stk;
	for (int i = 1; i <= n; i++)
	{
		if (stk.empty())
		{
			ans.push_back(0);
			stk.push(i);
		}
		else
		{
			while (!stk.empty())
			{
				if (v[i] > v[stk.top()])
				{
					ans.push_back(stk.top());
					stk.push(i);
					break;
				}
				else
				{
					stk.pop();
				}
			}
			if (stk.empty())
			{
				ans.push_back(0);
				stk.push(i);
			}
		}
	}
	for (auto x : ans)
	{
		cout << x << " ";
	}
}