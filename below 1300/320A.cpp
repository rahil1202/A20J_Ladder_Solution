#include <bits/stdc++.h>
using namespace std;
main()
{
    string st;
    cin >> st;
    int flag(1);
    for (int i = 0; i < st.size(); ++i)

    {
        if (st[i] == '1' && st[i + 1] == '4' && st[i + 2] == '4')
            i = i + 2;
        else if (st[i] == '1' && st[i + 1] == '4')
            ++i;
        else if (st[i] == '1')
            continue;
        else
            flag = 0;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}