#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, index(0);
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int current_min(arr[0]), min(0);
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] <= current_min)
        {
            min = current_min;
            current_min = arr[i];
            index = i;
        }
    }
    if (n == 1)
        cout << 1;
    else if (current_min == min)
        cout << "Still Rozdil";
    else
        cout << index + 1;
}