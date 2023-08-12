#include <bits/stdc++.h>
using namespace std;
main()
{
    string str;
    cin >> str;
    int count(0);
    sort(str.begin(), str.end());
    int temp = str.size();
    for (int i = 0; i < str.size() - 1; ++i)
    {
        if (str[i] == str[i + 1])
            count++;
    }
    temp -= count;
    temp % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}
