#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char name[100][101];
    int i, j;
    char largest[101];
    for (i = 0; i < n;) {
        for (j = 0; j < 101; j++) {
            scanf("%c", &name[i][j]);
            if (name[i][j] == '\n') {
                name[i][j] = '\0';
                break;
            }
        }
        i++;
    }
    int max = strlen(name[0]);
    int number = 0;
    for (i = 1; i < n; i++) {
        if (max < strlen(name[i])) {
            max = strlen(name[i]);
            number = i;
        }
    }
    strcpy(largest, name[number]);
    printf("%s", largest);

    return 0;
}
