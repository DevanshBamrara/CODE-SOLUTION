#include <bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(n < i){
        return;
    }
    print(i+1,n);
    cout<<i<<endl;  
}
int main() {
    int n = 5;
    print(1,n);

}