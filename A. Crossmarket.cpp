#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        if(n == 1 && m == 1){
            cout<<0<<"\n";
        }
        else{
            int ans = n + m - 2 + min(n,m);
            cout<<ans<<"\n";
        }
    }
}