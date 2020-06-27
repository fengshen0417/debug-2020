#include <stdio.h>
#include <string.h>
int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int mat[15][15];
    memset(mat, 0, sizeof(mat));
    int m;
    int n;
    scanf_s("%d %d", &m, &n);

    int i;
    int j;
    int k;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &matrix_a[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            scanf_s("%d", &matrix_b[j][i]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < n; k++)
            {
                mat[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }


    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", mat[i][j]);
            if (j == m - 1 && i != m - 1) {
                printf("\n");
            }
            else if (i != m) {
                printf(" ");
            }

        }
    }


    return 0;
}