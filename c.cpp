#include <stdio.h>
#include <string.h>

int main()
{
    long long int N, i, j;
    scanf("%d", &N);
    long long int P[N - 1], Q[N - 1], kartu, plyr;
    // char plyr[10];

    for (i = 0; i < N; i++)
    {
        scanf("%lld", &P[i]);
    }
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &Q[i]);
    }
    plyr = 1;
    for (i = 0; i < N; i++)
    {
        if (P[i] > 0 || Q[i] > 0)
        {
            if (P[i] > 0)
                kartu = P[i];
            else
                kartu = Q[i];
            for (j = i; j < N; j++)
            {
                if ((kartu == P[i] || kartu == Q[i]) && kartu != 0)
                {
                    P[i] = Q[1] = 0;
                    if (plyr == 1)
                        plyr = 2;
                    else
                        plyr = 1;
                }
            }
        }
    }
    if (plyr == 2)
        printf("Second\n");
    else
        printf("First\n");

    return 0;
}