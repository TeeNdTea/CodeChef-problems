#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int rate[5];
        int sum = 0;
        for(int i=0; i<5; i++) 
        {
            cin >> rate[i];
            sum += rate[i];
        }
        for(int i=0; i<4; i++) 
        {
            for(int j= i+1; j<5; j++) 
            {
                if(rate[i] > rate[j]) 
                {
                    int temp = rate[i];
                    rate[i] = rate[j];
                    rate[j] = temp;
                }
            }
        }
        int bribe = 0;
        int i = 0;
        while (sum < 35 && i < 5) 
        {
            sum += (10-rate[i]);
            bribe++;
            i++;
        }
        cout << bribe * 100 << endl;
    }
    return 0;
}
