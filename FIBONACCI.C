#include <stdio.h>
// int func1()
int main()
{
    int i,n, a = 0, b = 1,c,temp;
    printf("How many terms do you want to enter:");
    scanf("%d", &n);
    if (n <= 2)
    {
        printf("the term od fibbonacci series is %4d %4d", a, b);
    }
    else
    {

        printf(" the term of fibbonacci series are %4d %4d", a, b);
        for (i = 0; i < n ; i++)
        {
            c = a + b;
            printf("%4d", c);
            a=b;
            b=c;
        }
    }
}