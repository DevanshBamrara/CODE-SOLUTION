#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t; cin>>t;
	while (t--){
		int n;
        cin >> n;
        if(n % 3 == 0){
            int t = n / 3;
            int h2 = t, h1 = t, h3 = t;
            cout<< h2 <<" "<< h1+1<<" "<< h3-1<<" \n";
        }
        else{
            int t = n / 3;
            int t1 = n % 3;
            int h2 = t, h1 = t, h3 = t;
            if(t1 == 2)
                cout<< h2+1 <<" "<< h1+t1<<" "<< h3-1<<" \n";
            else
                cout<< h2 <<" "<< h1+t1+1<<" "<< h3-1<<" \n";
        }
	}
}