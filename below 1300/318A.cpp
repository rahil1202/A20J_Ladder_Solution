#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
            cout << (k * 2) - 1;
        else
        {
            k = abs(k - n / 2);
            cout << k * 2;
        }
    }
    else if (n % 2 != 0)
    {
        if (k <= n / 2 + 1)
            cout << (k * 2) - 1;
        else
        {
            k = abs(k - n / 2 - 1);
            cout << k * 2;
        }
    }
}