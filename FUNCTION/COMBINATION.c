#include <stdio.h>
int fact(int a)
{
    int i, f = 1;
    for (i = 2; i <= a; i++)
    {
        f = i * f;
    }
    return f;
}
int fact2(int a, int b)
{ 
    int l, j, k,nCr;
    l = fact(a);
    j = fact(b);
    k = fact(a - b);

    nCr = l / (j * k);
    return nCr;
}

int main()
{
    int n, c, i, j;
    printf("enter the no of lines:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            c = fact2(i, j);
            printf("  %d", c);
        }
        printf("\n");
    }

    return 0;
}