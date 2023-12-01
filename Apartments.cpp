#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	multiset<int> people,house;
	for(int i=0;i<n;i++){
		int temp; cin>>temp;
		people.insert(temp);
	}
	for(int i=0;i<m;i++){
		int temp; cin>>temp;
		house.insert(temp);
	}
	int ans = 0;
	for(auto x : people){
		auto it = house.lower_bound(x-k);
		if(it == house.end() || *it > x+k){
			continue;
		}
		else{
			ans++;
			house.erase(it);
		}
	}
	cout<<ans;
}