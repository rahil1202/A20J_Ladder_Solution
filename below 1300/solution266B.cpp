#include <iostream>
using namespace std;
main()
{
    int n, t;
    string str;
    cin >> n >> t;
    cin >> str;
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                str[i] = 'G';
                str[i + 1] = 'B';
                ++i;
            }
        }
    }
    cout << str << endl;
}