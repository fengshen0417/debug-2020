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

    int max = strlen(names[0]);
    int number = 0;
    for (i = 1; i < n; i++) {
        if (max < strlen(names[i])) {
            max = strlen(names[i]);
            number = i;
        }
    }

    printf("%s\n", names[number]);
    return 0;
}