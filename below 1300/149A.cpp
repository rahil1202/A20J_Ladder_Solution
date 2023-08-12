#include <bits/stdc++.h>
using namespace std;
main()
{
    int value, i(0);
    cin >> value;
    int arr[12];
    for (i = 0; i < 12; ++i)
        cin >> arr[i];
    sort(arr, arr + 12, greater<int>());
    int sum(0);

    for (i = 0; i < 12; ++i)
    {
        if (sum < value)
            sum += arr[i];
        else
            break;
    }

    if (i == 12 && sum < value)
        cout << -1;
    else
        cout << i;
}
