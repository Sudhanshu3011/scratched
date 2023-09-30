#include <stdio.h>
//crosss pattern
int main()
{
    int n, i, j;
    printf("Enter the number of lines :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if(i==j ||i+j==n+1)
            {
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}