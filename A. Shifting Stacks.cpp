#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long cur = 0;
        bool flag = false;
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            cur += temp;
            if(i * (i+1) / 2 > cur){
                flag = true;
            }
        }
        cout<<(flag ? "NO" : "YES")<<endl;
    }
}