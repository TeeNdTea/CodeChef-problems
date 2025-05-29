#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n);
    for(int i = 0; i < e; i++) 
    {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int q;
    cin >> q;
    while(q--) 
    {
        int x;
        cin >> x;
        
        if(graph[x].size() == 0) 
        {
            cout << "-1\n";
        }
        else 
        {
            sort(graph[x].begin(), graph[x].end(), greater<int>());
            
            for(int y : graph[x]) 
            {
                cout << y << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}