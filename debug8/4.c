#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    int n;
    scanf("%d", &n);
    char name[MAX][100];
    char temp[100];

    for (int i = 0; i < n + 1; ) {
        gets(name[i]);
        i++;
    }

    for (int j = 0; j < n; j++) {
        int isSorted = 1;
        for (int k = 0; k < n - j - 1; k++) {
            if (strlen(name[k]) < strlen(name[k + 1])) {
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
                isSorted = 0;
            }
        }
        if (isSorted) break;
    }
    printf("%s\n", name[0]);
    return 0;
}