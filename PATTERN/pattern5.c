#include <stdio.h>
//print frame pattern 
int main()
{
    int n, i, l, j, k;
    printf("Enter the number of lines :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {

        for (j = 0; j <= n; j++)
        {

            if ((i == 0) || (j == 0)||(i == n) || (j == n))
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