#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<long long> v;
        for (int i = 0; i < n; ++i) {
            long long temp;
            cin>>temp;
            v.push_back(temp);
        }
        vector<long long> t(k);
        for (int i = 0; i < n; ++i) {
            t[i%k] = max(t[i%k],v[i]);
        }
        long long sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += t[i];
        }
        cout<<sum<<"\n";
    }
}