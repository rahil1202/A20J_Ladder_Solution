#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, count(0);
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 1)
            continue;
        else if (a == 1 && b == 0)
            count += 2;
        else if (a == 0 && b == 0)
            continue;
        else
            count++;
    }
    cout << count;
}