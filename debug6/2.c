#include <stdio.h>
#include <string.h>
int main() {
    int r = 0, w = 0, x = 0;
    char sign[4];
    char temp[3];
    scanf("%s\n", sign);
    for (int i = 0; i < strlen(sign); i++) {
        if (sign[i] == 'r') {
            r = 1;
        }
        if (sign[i] == 'w') {
            w = 1;
        }
        if (sign[i] == 'x') {
            x = 1;
        }
    }

    while (scanf("%s", temp) != EOF) {
        if (temp[1] == 'x' && temp [0] == '+') {
            x++;
        }
        if (temp[1] == 'x' && temp[0] == '-') {
            x--;
        }
        if (temp[1] == 'r' && temp[0] == '+') {
            r++;
        }
        if (temp[1] == 'r' && temp[0] == '-') {
            r--;
        } if (temp[1] == 'w' && temp[0] == '+') {
            w++;
        } if (temp[1] == 'w' && temp[0] == '-') {
            w--;
        }
    }

    printf("%d\n", r * 4 + w * 2 + x);

    return 0;
}