#include <stdio.h>
int max(int a, int b, int c)
{
    int l;
    l = a;
    if (l < b)
    {
        l = b;
    }
    if (l < c)
    {
        l = c;
    }
    return l;
}
int main()
{
    int a, b, c;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("Enter the number:");
    scanf("%d", &b);
    printf("Enter the number:");
    scanf("%d", &c);
    c = max( a,b,c);
    printf("The maximum of a,b and c: %d", c);

    return 0;
}