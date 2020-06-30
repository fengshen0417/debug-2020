#include <stdio.h>
int main() {
    char n[4];
    int a[3] = { 0,0,0 };
        scanf("%s", n);
    for (int i = 0; i < 3; i++) {
        if (n[i] == 'r') {
            a[0] = 1;
        }
        if (n[i] == 'w') {
            a[1] = 1;
        }
        if (n[i] == 'x') {
            a[2] = 1;
        }

    }
    while (scanf("%s", n) != EOF) {
        if (n[0] == '+') {
            if (n[1] == 'r') {
                a[0] = 1;
            }
            if (n[1] == 'w') {
                a[1] = 1;
            }
            if (n[1] == 'x') {
                a[2] = 1;
            }
        }
        if (n[0] == '-') {
            if (n[1] == 'r') {
                a[0] = 0;
            }
            if (n[1] == 'w') {
                a[1] = 0;
            }
            if (n[1] == 'x') {
                a[2] = 0;
            }
        }
    }
    int o = a[0] * 2 * 2 + a[1] * 2 + a[2];
    printf("%d", o);
    return 0;
}
