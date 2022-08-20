#include <bits/stdc++.h>
using namespace std;
main()
{
    string str;
    cin >> str;
    int lc(0), uc(0);
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ++lc;
        else
            ++uc;
    }
    if (lc >= uc)
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    else
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
}