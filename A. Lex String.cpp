#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t; cin>>t;
	while (t--){
		int n,m,k;
		cin>>n>>m>>k;
		string s1,s2,s3="";
		cin>>s1>>s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		int i = 0, j = 0, c1 = 0, c2 = 0;
		while(i < n && j < m){
			if((s1[i]<=s2[j] && c1 != k) || c2==k){
				s3 += s1[i];
				i++;
				c1++;
				c2 = 0;
			}
			else{
				s3 += s2[j];
				j++;
				c2++;
				c1 = 0;
			}
		}
		cout<<s3<<"\n";
	}
}