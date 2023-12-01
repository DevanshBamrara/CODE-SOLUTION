#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        if(n%2){
           for(int i=1;i<n-2;i+=2){
                swap(v[i],v[i+1]);
            } 
        }
        else{
            for(int i=0;i<n-2;i+=2){
                swap(v[i],v[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}