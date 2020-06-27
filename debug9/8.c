#include <stdio.h>
int mt(int x) {
    if (x == 0) { return 1; }
    else {
        return x * mt(x - 1);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int x;
    int y;
    int m = 1;
    int b = 1;
    for (x = 0; x <= n / 2; x++) {
        for (y = 0; y <= n / 3; y++) {
            if (x * 2 + y * 3 == n) {
                i =i + mt(x + y) / (mt(x) * mt(y));
            }
        }
    }
    printf("%d", i);
    return 0;
}