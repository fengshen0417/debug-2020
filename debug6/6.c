#include <stdio.h>
#include <string.h>

int main() {
    int r = 0;
    int w = 0;
    int x = 0;
    char plus[2] = "+";
    char minus[2] = "-";
    char oprator[2] = "@";
    char rr[2] = "r";
    char ww[2] = "w";
    char xx[2] = "x";

    char input[4];

    while (scanf("%s", input) != EOF) 
    {
        if (input[0] == plus[0])
        {
            oprator[0] = '+';
        }
        else if (input[0] == minus[0])
        {
            oprator[0] = '-';
        }
        for (int i = 0; i < 4; i++) 
        {
            if (input[i] == rr[0]) 
            {
                if (strcmp(oprator, plus) == 0) 
                {
                    r = 1;
                }
                else if (oprator[0] == '-' ) 
                {
                    r = 0;
                }
                else {
                    r = 1;
                }
            }
            if (input[i] == ww[0])
            {
                if (strcmp(oprator, plus) == 0) 
                {
                    w = 1;
                }
                else if (oprator[0] == '-') 
                {
                    w = 0;
                }
                else {
                    w = 1;
                }
            }
            if (input[i] == xx[0])
            {
                if (strcmp(oprator, plus) == 0) 
                {
                    x = 1;
                }
                else if (oprator[0] == '-') 
                {
                    x = 0;
                }
                else 
                {
                    x = 1;
                }
            }
        }
    }

    int output = x * 1 + w * 2 + r * 4;
    printf("%d", output);
    return 0;
}