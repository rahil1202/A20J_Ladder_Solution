#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans(0);
    for (int j = 0; j < m; ++j)
    {
        if (arr[j] < 0)
            ans += abs(arr[j]);
        else
            continue;
    }
    cout << ans;
    return 0;
}