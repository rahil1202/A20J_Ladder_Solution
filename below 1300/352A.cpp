#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int arr[n];
    int five(0), zero(0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            ++zero;
        else
            ++five;
    }
    if (zero == 0)
        cout << 0;
    else if (five < 9)
        cout << -1;
    else
    {
        five -= five % 9;
        for (int i = 0; i < five; ++i)
            cout << 5;
        for (int i = 0; i < zero; ++i)
            cout << 0;
    }
}