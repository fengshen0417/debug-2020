#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int digit;
    int a = 0;
    if (num == 2)
    {
        printf("2\n");
    }
    else if (num == 1) {
        return 0;
    }
    else if (num > 2) {
        printf("2\n");
        for (digit = 3; digit <= num; digit++)
        {
            for (a = 2; a < digit; a++) {
                if (digit % a == 0) {
                    break;
                }
            }
            if (a == digit) {
                printf("%d\n", digit);
            }
        }
    }
    return 0;
}