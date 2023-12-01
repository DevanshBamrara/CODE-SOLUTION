#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	multiset<int> tickets;
	vector<int> customers;
	for(int i=0;i<n;i++){
		int temp; cin>>temp;
		tickets.insert(temp);
	}
	for(int i=0;i<m;i++){
		int temp; cin>>temp;
		customers.push_back(temp);
	}
	for(auto x : customers){
		auto it = tickets.lower_bound(x);
		if(*it==x){
			cout<<*it<<endl;
			tickets.erase(it);
		}
		else if (*it > x && it!=tickets.begin()) {
			int flag = 0;
			while(it!=tickets.begin()){
				--it;
				if(*it<=x){
					cout<<*it<<endl;
					tickets.erase(it);
					flag = 1;
					break;
				}	
			}
			if(flag == 0)
				cout<<-1<<endl;
		}
		else if(it == tickets.end()){
			if(!tickets.empty()){
				cout<<*(tickets.rbegin())<<endl;
				tickets.erase(--tickets.end());
			}
			else{
				cout<<-1<<endl;
			}
		}
		else if(it == tickets.begin()){
			cout<<-1<<endl;
		}
	}

}