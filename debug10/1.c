#include <stdio.h>
int main() {
    int a, b, c, d;
    c = 0;
    scanf("%d", &a);
    if (a >= 2) {
        printf("2\n");
        for (d = 3; d <= a; d += 1) {
            c = 0;
            for (b = 2; b < d; b += 1) {
                if (d % b == 0) {
                    c += 1;
                }
            }
            if (c == 0) {
                printf("%d\n", d);
            }
        }
    }
    else {
        return 0;
    }

    return 0;
}