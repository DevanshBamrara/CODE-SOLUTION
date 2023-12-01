#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n*k];
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i=0;i<n*k;i+=n){
            int avg = (i + (i+n-1)) / 2;
            sum += arr[avg];
        }
        cout<<sum<<endl;
    }
}