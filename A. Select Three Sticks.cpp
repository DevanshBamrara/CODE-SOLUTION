#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int mn = INT_MAX, flag = 0;
        for (int i = 0; i <= n - 3; ++i) {
            if(v[i] == v[i+1] == v[i+2]){
                cout<<"0\n";
                flag = 1;
                break;
            }
            else{
                int a = v[i] , b = v[i+1], c = v[i+2];
                int temp = abs(a-b) + abs(b-c);
                mn = min(mn,temp);
            }
        }
        if(flag == 0){
            cout<<mn<<"\n";
        }
    }
}