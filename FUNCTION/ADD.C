#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("Enter the number:");
    scanf("%d", &b);
    c = sum(a, b);
    printf("The sum of no is :%d", c);

    return 0;
}