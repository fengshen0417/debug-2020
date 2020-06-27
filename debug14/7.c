#include <stdio.h>
int main()
{
    int i, j, n, m;
    scanf("%d", &n);
    m = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * (n - i + 1) + 1; j++ ) {
            if (j == 2 * (n - i + 1) + 1) {
                printf("\n");
            }
            else if (j % 2 == 0 && j != 2 * (n - i + 1) + 1)
                printf(" ");
            else {
                printf("%d", m);
                m--;
            }
        }
        m = n - i;
    }
    return 0;
}