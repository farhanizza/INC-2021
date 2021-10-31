#include <stdio.h>

int main()
{
    int N, A[1000], i, min[1000], max[1000], imax[1000], imin[1000];
    scanf("%d", &N);
    int j = 0, k = 0, m, angka;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > 0)
        {
            j++;
            max[j] = A[i];
            imax[j] = i;
        }
        else
        {
            k++;
            min[k] = A[i];
            imin[k] = i;
        }
    }
    bool sus;
    int c = 0;
    for (i = 1; i <= k; i++)
    {
        sus = false;
        angka = min[i] * (-1);
        for (m = 1; m <= j; m++)
        {
            if (max[m] == angka && imax[m] < imin[i])
            {
                sus = true;
                break;
            }
        }
        if (!sus)
            c++;
    }
    printf("%d\n", c);

    return 0;
}