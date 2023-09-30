#include <stdio.h>
//no adjacent will be same in the binary code(0,1)
int main()
{
    int n, i, j;
    printf("Enter the number of lines :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {

            if ((i == j) || (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}