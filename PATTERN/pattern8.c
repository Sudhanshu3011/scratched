#include <stdio.h>
int main()
{
    int n, i, k, j;
    printf("Enter the number of lines :");
    scanf("%d", &n);
    int nsp = n / 2;
    int nstr = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nsp; j++)
        {

            printf(" ");
        }
        for (k = 1; k <= nstr; k++)
        {
            printf("*");
        }
        if (i <= n / 2 + 1)
        {
            nsp--;
            nstr += 2;
        }
        else
        {
            nsp++;
            nstr -= 2;
        }
    
    printf("\n");
}
return 0;
}