#include "stdio.h"

int main(){
    int a, b, c;

    scanf("%d %d", &a, &b);

    c=a-b;

    printf("The difference (or subtraction) of %d and %d is: %d\n", a, b, c);

    return 0;
}