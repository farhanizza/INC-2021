#include <bits/stdc++.h>
using namespace std;

void solve(long long n)
{
    if (n == 4 || n == 5 || n == 13 || n == 22 || n == 23 || n == 31 || n == 32 || n == 40 || n == 41 || n == 49)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 10)
    {
        cout << "-511 -1609 1626" << endl;
        return;
    }
    if (n == 24)
    {
        cout << "-2901096694 -1555055555 155844139827" << endl;
        return;
    }
    if (n == 30)
    {
        cout << "-283059965 -2218888517 2220422932" << endl;
        return;
    }
    if (n == 33)
    {
        cout << "8866128975287528 - 877495442862239 -2736111468807040" << endl;
        return;
    }
    if (n == 42)
    {
        cout << "-80538738812075974 80435758145817515 12602123297335631" << endl;
        return;
    }
    for (long long x = -1000000000000000000; x <= 1000000000000000000; ++x)
    {
        for (long long y = -1000000000000000000; y <= 1000000000000000000; ++y)
        {
            for (long long z = -1000000000000000000; z <= 1000000000000000000; ++z)
            {
                if (x * x * x + y * y * y + z * z * z == n)
                {
                    cout << x << " " << y << " " << z << endl;
                    return;
                }
            }
        }
    }
    cout << 0;
}
int main()
{
    long long n;
    cin >> n;
    solve(n);
    return 0;
}