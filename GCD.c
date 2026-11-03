#include<stdio.h>

int main()
{
    int a,b,r;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    r = a - ((a/b) * b);

    printf("Remainder = %d", r);

    return 0;
}