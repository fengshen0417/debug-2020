#include <stdio.h>
#include <string.h>
int main() {
    int i, j;
    char names[10][21];
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[21];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}