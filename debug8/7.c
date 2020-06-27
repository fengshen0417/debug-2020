#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    char names[MAX][101];
    char temp[101];

    for (i = 0; i < n + 1;) {
        for (j = 0; j < 101; j++) {
            scanf("%c", &names[i][j]);
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }
        }
        i++;
    }

    for (int i = 0; i < n; i++) {
        int isSorted = 1;
        for (int j = 0; j < n - j - 1; j++) {
            if ((strlen(names[j]) < strlen(names[j + 1]))) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
                isSorted = 0;
            }
        }
        if (isSorted) break;
    }

    printf("%s\n", names[0]);
    return 0;
}