#include <bits/stdc++.h>
using namespace std;
main()
{
    string A, B;
    cin >> A >> B;
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    transform(B.begin(), B.end(), B.begin(), ::tolower);
    if (A.compare(B) > 0)
        cout << 1;
    else if (A.compare(B) < 0)
        cout << -1;
    else
        cout << 0;
}