#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = 1, y = n, mi;
    mi = abs(a[0] - a[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i + 1] - a[i]) < mi)
        {
            mi = abs(a[i + 1] - a[i]);
            x = i + 2, y = i + 1;
        }
    }
    cout << y << " " << x << endl;
    return 0;
}