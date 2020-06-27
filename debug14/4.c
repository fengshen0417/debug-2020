#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            if (j > 1) {
                printf("%d ", j);
            }
            else if (j == 1 && i != 1) {
                printf("%d\n", j);
            }
            else {
                printf("%d", j);
            }
        }
    }
    return 0;
}