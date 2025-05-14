#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main() 
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int n;
        cin >> n; 
        vector<int> a(n);
        for(int i=0; i<n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end()); 
        long long res = 1;
        for(int i=0; i<n; i++) 
        {
            int temp = a[i]-i; 
            if(temp <= 0) 
            {
                res = 0;
                break;
            }
            res = (res * temp) % MOD;
        }

        cout << res << endl;
    }

    return 0;
}
