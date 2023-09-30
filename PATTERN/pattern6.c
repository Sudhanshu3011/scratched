#include <stdio.h>
//pascals triangle
int main()
{
    int n, a, i, l, j, k;
    printf("Enter the number of lines :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        int a = i;
        for (k = 1; k <= n - i; k++)
        {

            printf(" ");
        }
        for (j = 0; j < i; j++)
        {

            printf("%d", j + 1);
        }
        for (j = 0; j < i - 1; j++)
        {

            printf("%d", a-1);
            a--;
        }

        printf("\n");
    }

    return 0;
}