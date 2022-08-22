#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    if (n == 1 || n % 2 == 1)
        cout << "-1";
    else
    {
        for (int i = n; i >= 1; --i)
            cout << i << " ";
    }
}