#include <stdio.h>
//daimond
int main()
{
    int b, n, i, k, j;
    
    printf("Enter no of lines:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        int a = 2 * i + 1;
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 0; j < a; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    b=n;
   for (i = 0; i < n-1 ; i++)
    {

        for (k = 0; k <= i+1; k++)
        {

            printf(" ");
        }
        for (j = 0; j < b+1; j++)
        {
            if(j>=0){
            printf("*");}
        }
        b= b - 2;
        printf("\n");
    }
    return 0;
}