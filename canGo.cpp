#include <bits/stdc++.h>
using namespace std;
bool isValid(int i, int j, int n, int m, vector<vector<char>>& bltn, vector<vector<bool>>& visited) 
{
    return i >= 0 && i < n && j >= 0 && j < m && bltn[i][j] != '#' && !visited[i][j];
}

bool canGoToRoomB(vector<vector<char>>& bltn, int n, int m, pair<int, int> A, pair<int, int> B) 
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push(A);
    visited[A.first][A.second] = true;
    vector<pair<int, int>> drct = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    while (!q.empty()) 
    {
        auto current = q.front();
        q.pop();
        if (current == B) 
        {
            return true;
        }
        for (auto& dir : drct) 
        {
            int ni = current.first + dir.first;
            int nj = current.second + dir.second;
            if (isValid(ni, nj, n, m, bltn, visited)) 
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
            }
        }
    }
    return false;
}
int main() 
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> bltn(n, vector<char>(m));
    pair<int, int> A, B;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            cin >> bltn[i][j];
            if (bltn[i][j] == 'A') 
            {
                A = {i, j};
            } 
            else if (bltn[i][j] == 'B') 
            {
                B = {i, j};
            }
        }
    }
    
    if (canGoToRoomB(bltn, n, m, A, B)) {
        cout << "YES\n";
    } 
    else 
    {
        cout << "NO\n";
    }
    
    return 0;
}
