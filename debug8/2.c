#include <stdio.h>
#include <string.h>
#define MAX 101
int main() {
    int n;
    scanf("%d", &n);
    char names[MAX][101];
    char max[101];
    int i, j;

    for (i = 0; i < n + 1;i++ ) {
        gets(names[i]);
    }

    for (int i = 0; i < n; i++) {
        int isSorted = 1;
        for (int j = 0; j < n - i - 1; j++) {
            if ((strlen(names[j]) >= strlen(names[j + 1]))) {
                strcpy(max, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], max);
                isSorted = 0;
            }
        }
        if (isSorted) break;
    }
    int b = n - 1;
    printf("%s\n", names[b]);
    return 0;
}