#include <stdio.h>
#include <string.h>
void swap (char *b, char *c) {
    char temp = *b;
    *b= *c;
    *c = temp;
}
int main() {
    char name[10][21];
    int i;
    int j;
    int m = 10;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i <m-j-1; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){ 
                for (int k = 0; k < 20; k++) {
                    swap(&name[i][k], &name[i + 1][k]);
                }
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]);    
    }
    return 0;
}


