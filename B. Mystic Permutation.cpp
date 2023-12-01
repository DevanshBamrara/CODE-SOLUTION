#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t; cin>>t;
	while (t--){
		int n;
        cin >> n;
        if(n == 1){
            vector<int> vec;
                int t;
                cin>>t;
                cout<<"-1\n";
        }
        else{
            vector<int> vec, vec1;
            for(int i=0;i<n;i++){
                int t;
                cin>>t;
                vec.push_back(t);
            }
            vec1 = vec;
            sort(vec1.begin(),vec1.end());
            for(int i=0;i<n;i++){
                if(vec[i] == vec1[i]){
                    if(i < n-1){
                        int t = vec1[i];
                        vec1[i] = vec1[i+1];
                        vec1[i+1] = t;
                    }
                    else{
                        int t = vec1[i];
                        vec1[i] = vec1[i-1];
                        vec1[i-1] = t;
                    }
                }
            }
            for( auto x : vec1){
                cout<<x<<" ";
            }
            cout<<"\n";

        }
	}
}