#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int q;
    cin >> q;
    while (q--) 
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool possible = true;
        int remove = 0;
        for(int i=0; i<n; i++) 
        {
            if(s[i]=='0' && t[i]=='1') 
            {
                possible = false;
                break;
            }
            if(s[i]=='1' && t[i]=='0') remove++;
        }
        if(remove % 2 !=0) possible = false;

        if(possible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
