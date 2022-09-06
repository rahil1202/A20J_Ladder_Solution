#include <bits/stdc++.h>
using namespace std;
main()
{
    string st1, st2;
    cin >> st1 >> st2;
    int n = st1.size();
    int flag(1);
    for (int i = 0, j = n - 1; i < n, j >= 0; ++i, --j)
    {
        if (st1[i] != st2[j])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}