#include <stdio.h>
//serial no wise 
int main()
{
    int a=1, n, i, j;
    printf("Enter the number of lines :");
    scanf("%d", &n);

    for (i = 0; i <n; i++)
    {
        for (j = 0; j <= i; j++)
        {

            printf("%d  ",a);
            a=a+1;
        }
        printf("\n");
    }

    return 0;
}