#include <stdio.h>
//power
int power(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return a * power(a, b - 1);
}
int main()
{
    int a, b;
    printf("Enter the base:");
    scanf("%d", &a);
    printf("Enter the power:");
    scanf("%d", &b);
    printf("Ans=%d", power(a, b));
    return 0;
}