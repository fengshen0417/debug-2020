#include<stdio.h>
int main()
{
    int n, i, j;
    int c = 0;
    scanf("%d", &n);
    if (n == 2)
    {
        printf("2\n");
    }
    else if (n == 1) {
        return 0;
    }
    else
    {
        printf("2\n");
        for (i = 3; i <= n; i = i + 1)
        {
            c = 0;
            for (j = 2; j < i; j = j + 1)
            {
                if (i % j == 0)
                {
                    c++;
                }
            }
            if (c == 0) {
                printf("%d\n", i);
            }
        }
        return 0;
    }
}