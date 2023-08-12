#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int solve(0);
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1 && y == 1 || z == 1 && x == 1 || y == 1 && z == 1)
            solve++;
    }
    cout << solve;
}