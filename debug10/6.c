#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d", &c);

    if (c == 1) {
        return 0;
    }
    else if (c == 1) {
        return 0;
    }
    else if (c > 1) {
        for (a = 2; a <= c; a++)
        {
            for (b = 2; b <= a; b++) {
                if (a % b == 0)
                    break;
            }
            if (b >= a) {
                printf("%d\n", a);
            }
        }
    }
    return 0;
}