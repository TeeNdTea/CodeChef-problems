#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        long long diff = a - b;
        long long num = m - n * b;
        if (diff==0) 
        {
            if (n * a == m) cout << "Yes\n";
            else cout << "No\n";
        } 
        else if (num % diff != 0) cout << "No\n";
        else 
        {
            long long x = num/diff;
            if(x>=0 && x<=n) cout << "Yes\n";    
            else cout << "No\n";
        }
    }

    return 0;
}
