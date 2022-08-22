#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    int count(0);

    for (int i = 2; i < 50; ++i)
    {
        if (x % i == 0)
            ++count;
        if (count == 2)
            return false;
    }

    return true;
}
main()
{
    int x, y;
    int flag(0);
    cin >> x >> y;
    for (int i = x + 1; i < 50; ++i)
    {
        if (isPrime(i))
        {
            if (i == y)
            {
                flag = 1;

                break;
            }
            else
                break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}