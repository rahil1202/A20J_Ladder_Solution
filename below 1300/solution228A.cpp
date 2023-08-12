#include <bits/stdc++.h>
using namespace std;
main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int count(0);
    sort(arr, arr + 4);
    for (int i = 0; i < 3; ++i)
    {
        if (arr[i] == arr[i + 1])
            count++;
    }
    cout << count;
}
