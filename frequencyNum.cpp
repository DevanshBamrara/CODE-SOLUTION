#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    int min = INT_MAX, max = INT_MIN, minval = 0, maxval = 0;
    for(auto it : mp){
        if(it.second < min){
            min = it.second;
            minval = it.first;
        }
         if(it.second > max){
            max = it.second;
            maxval = it.first;
        }
    }
    cout<<maxval<<" "<<minval;

}