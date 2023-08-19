#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a 1st Value: ");
    scanf("%d", &a);
    printf("Enter a 2nd VAlue: ");
    scanf("%d", &b);
    int sum = 0;
    sum = a + b;
    printf("%d", sum);
    printf("%d", a * b);
    printf("%d", a / b);
}