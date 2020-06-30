#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int inter;
    // ¶ÁÈë¸ø¶¨µÄÊý×Ö
    for (i = 0; i < n; i++) {
        scanf_s("%d", &numbers[i]);
    }
    for (i = 0; i < 9; i++) {
        for (m = 0; m < 9; m++) {
            if (numbers[m] < numbers[m + 1]) {
                max = numbers[m];
                numbers[m] = numbers[m + 1];
                numbers[m + 1] = max;
            }
        }
    }

    for (i = 0; i <= 9; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }
    return 0;
}
