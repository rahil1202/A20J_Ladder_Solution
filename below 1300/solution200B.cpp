#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int arr[n];
    float sum(0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum / n << endl;
}