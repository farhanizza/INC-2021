#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lego = 0;
    int l[1001], count = 0, result, sum = 0, flag = 0;
    cin >> lego;
    for (int i = 0; i < lego; i++)
    {
        cin >> l[i];
        count += l[i];
    }
    for (int j = 0; j <= lego; j++)
    {
        int div = lego / 2;
        for (int k = 1; k <= div; k++)
        {
            sum += l[flag];
            flag++;
        }
        int res2 = count / sum;
        if (res2 == 2)
        {
            cout << "YES";
            break;
        }
        else if (j == lego)
        {
            cout << "NO";
            break;
        }
        sum = 0;
        flag--;
    }
    return 0;
}