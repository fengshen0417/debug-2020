#include <stdio.h>
int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            if (i == 1 && j == 1) {
                printf("%d", j);
            }
            else {
                printf("%d%c", j, j == 1 ? '\n' : ' ');
            }
        }
    }
    return 0;
}