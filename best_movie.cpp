#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int m;
        cin >> m; 
        int cost = -1; 
        for(int i=0; i<m; i++) 
        {
            int ai, bi;
            cin >> ai >> bi; 
            if(ai >= 7) 
            {
                if(cost == -1 || bi < cost) cost = bi; 
            }
        }
        cout << cost << endl;
    }
    return 0;
}