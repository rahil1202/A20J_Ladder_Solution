#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    // string str;
    cin >> n;
    int ans(0);
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "++X" || str == "X++")
            ans++;
        else
            ans--;
    }
    cout << ans;
}