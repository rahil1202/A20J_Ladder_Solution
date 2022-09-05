#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int arr[n];
    int nine(0), zero(0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            ++zero;
        else
            ++nine;
    }
    if (zero == 0)
        cout << 0;
    else if (nine < 9)
        cout << -1;
    else
    {
        nine -= nine % 9;
        for (int i = 0; i < nine; ++i)
            cout << 5;
        for (int i = 0; i < zero; ++i)
            cout << 0;
    }
}