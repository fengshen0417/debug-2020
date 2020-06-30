#include <stdio.h>
#include<string.h>
#define maxn 500
int main() {
    int i, j, k;
    int arr[32] = { 0 };
    int bits[32];
    char str[maxn], rstr[maxn];
    i = 0;
    scanf("%s", &str);
    for (i = 1; i <= strlen(str); i++)
    {
        if (str[i] == '\n') break;
        arr[i % 32] += (int)str[i - 1];
    }
    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        rstr[j] = bits[j] % 85 + 34;
    }
    for (i = 0; i < 32; i++) {
        printf("%c", rstr[i]);
    }
    return 0;
}
