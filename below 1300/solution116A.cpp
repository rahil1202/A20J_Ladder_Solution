#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int temp(0), capacity(0);
    while (n--)
    {
        int x, y;
        // x leaves and y enters the tram
        cin >> x >> y;
        temp -= x;
        temp += y;
        if (temp > capacity)
            capacity = temp;
    }
    cout << capacity;
}