#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem = n % 3;
    int multiple;
    if (rem == 0) multiple = n;
    else if (rem == 1) multiple = n-1;
    else multiple = n + 1;
    cout << multiple << endl;

    return 0;
}