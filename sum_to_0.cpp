#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        if(n == 1) 
        {
            cout << -1 << endl;
            continue;
        }
        if(n == 3) 
        {
            cout << "1 2 -3" << endl;
            continue;
        }
        int a[50];
        int idx = 0;
        if (n%2 == 1) 
        {
            a[idx++] = 1;
            a[idx++] = 2;
            a[idx++] = -3;
        }
        while (idx < n) 
        {
            a[idx++] = 3;
            a[idx++] = -3;
        }
        for (int i=0; i<n; i++) 
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
