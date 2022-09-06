#include <bits/stdc++.h>
using namespace std;
main()
{
    long long n, m;
    cin >> n >> m;
    long long arr[m];
    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    long long dis = arr[0] - 1;
    for (int i = 0; i < m - 1; ++i)
    {
        if (arr[i + 1] >= arr[i])
            dis += arr[i + 1] - arr[i];
        else
            dis += n - arr[i] + arr[i + 1];
    }
    cout << dis << endl;
}