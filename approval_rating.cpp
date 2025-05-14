#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int rate[5]; 
        int sum = 0;    
        int bribe = 0; 
        for(int i=0; i<5; i++) 
        {
            cin >> rate[i];
            sum += rate[i];
        }
        for (int i=0; i<5 && (sum / 5.0) < 7; i++) 
        {
            if (rate[i] < 10) 
            {
                sum += (10 - rate[i]); 
                bribe++; 
            }
        }
        cout << bribe * 100 << endl; 
    }

    return 0;
}