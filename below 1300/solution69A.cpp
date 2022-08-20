#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum_x(0), sum_y(0), sum_z(0);
    int x[n], y[n], z[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i] >> z[i];
        sum_x += x[i];
        sum_y += y[i];
        sum_z += z[i];
    }
    /* for(int i=0;i<n; ++i)
    {
        sum_x+=x[i];
        sum_y+=y[i];
        sum_z+=z[i];
    } */
    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}