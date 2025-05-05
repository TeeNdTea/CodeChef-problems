#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q>0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int boys,girls,ppl;
        boys=0;
        girls=0;
        ppl=0;

        for(int i=0; i<n; i++)
        {
            char person = s[i];
            if(person == 'B') boys++;
            else if(person == 'G') girls++;
            if(boys > 2 * girls) 
            break;
            ppl++;
        }
    cout << ppl << endl;
    q--;

    }
    return 0;
}