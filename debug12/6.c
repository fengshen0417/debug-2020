#include<stdio.h>
#define PI 3.14159
int main(){
    double r;
    scanf("%lf",&r);
    printf("%.3lf\n", 2 * PI * r);
    printf("%.3lf\n", PI * r * r);
    return 0;
}