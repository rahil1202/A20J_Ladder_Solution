#include <bits/stdc++.h>
using namespace std;
main()
{
    string x, y;
    cin >> x >> y;
    /* int ans[x.size()]; */
    for (int i = 0; i < x.size(); ++i)
    {
        if (x[i] == '1' && y[i] == '1' || x[i] == '0' && y[i] == '0')
            cout << 0;
        else
            cout << 1;
    }
    // ans[x.size() - 1] = '\0';
}