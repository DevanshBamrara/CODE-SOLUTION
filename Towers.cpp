#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int temp; cin>>temp;
		auto it = upper_bound(v.begin(),v.end(),temp);
		if(it == v.end()){
			v.push_back(temp);
		}
		else{
			*it = temp;
		}
	}
	cout<<v.size();
}