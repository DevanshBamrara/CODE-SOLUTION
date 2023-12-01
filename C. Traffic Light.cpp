#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin>>c;
        string str;
        cin>>str;
        str = str + str;
        if(c == 'g'){
            cout<<0<<endl;
        }
        else{
            int mx = -1, ans = -1;
            for(int i = str.size() - 1;i >= 0;i--){
                if(str[i] == 'g'){
                    mx = i;
                }
                if(str[i] == c && mx!=-1){
                    ans =   max(ans, mx - i);
                }
            }
        cout<<ans<<endl;
        }
        
    }
}