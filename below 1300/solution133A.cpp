#include <bits/stdc++.h>
using namespace std;
main()
{
    string str;
    int flag(1);
    cin >> str;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            flag = 1;
            break;
        }
        else
        {

            flag = 0;
            continue;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
