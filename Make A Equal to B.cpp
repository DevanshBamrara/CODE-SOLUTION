	#include <bits/stdc++.h>
	using namespace std;
	int main () {
		ios::sync_with_stdio(false);
		std::cin.tie(NULL);
		int t; cin>>t;
		while (t--){
			int n;
			cin >> n;
            int cnt = 0, cnt1 = 0;
			int arr1[n], arr2[n];
            for(int i=0;i<n;i++){
                cin>>arr1[i];
                if(arr1[i]==0){
                    cnt++;
                }
            }
            int flag = 0, diff = 0;
            for(int i=0;i<n;i++){
                cin>>arr2[i];
                if(arr1[i]!=arr2[i]){
                    flag = 1;
                    diff++;
                }
                if(arr2[i]==0){
                    cnt1++;
                }
            }
            if(flag == 0){
                cout<<"0\n";
            }
            else if(cnt1 == cnt){
                cout << "1\n";
            }
            else{
                int temp = abs(cnt-cnt1);
                int ans = min(diff,temp+1);
                cout << ans << "\n";
            }

		}
	}