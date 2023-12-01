#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int indx1 = s1.size() - 1, indx2 = s2.size() - 1;
        if(s1.size() == s2.size()){
            int indx = s1.size() - 1;
            if(s1[indx] == s2[indx]){
                cout << "=\n";
            }
            else if(s1[indx] > s2[indx]){
                cout << "<\n";
            }
            else{
                cout << ">\n";
            }
        }
        else{
            if(s1[indx1] == s2[indx2]){
                if(s1[indx1] == 'S'){
                    if(s1.size() > s2.size()){
                        cout << "<\n";
                    }
                    else{
                        cout << ">\n";
                    }
                }
                if(s1[indx1] == 'L'){
                    if(s1.size() > s2.size()){
                        cout << ">\n";
                    }
                    else{
                        cout << "<\n";
                    }
                }
            }
            else{
                if(s1[indx1] > s2[indx2]){
                    cout << "<\n";
            }
                else{
                    cout << ">\n";
                }
            }
        }

    }
}