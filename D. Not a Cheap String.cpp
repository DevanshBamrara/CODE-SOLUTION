#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, ans = "";
        cin>>str;
        int n = str.size();
        int p;
        cin>>p;
        int score = 0;
        vector<bool> take(n,0);
        for(auto c : str){
            score += (c - 'a' + 1);
        }
        vector<pair<char, int>> v;
        if(score <= p){
            cout<<str<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                v.push_back({str[i],i});
            }
            sort(v.begin(),v.end());
            for(int i = n -1; i>=0;i--){
                score -= (v[i].first - 'a' + 1);
                take[v[i].second] = 1;
                if(score <= p)
                    break;
            }
            string ans = "";
            for(int i=0;i<n;i++){
                if(!take[i]){
                    ans += str[i];
                }
            }
            cout<< ans<<endl;

        }
    }
}