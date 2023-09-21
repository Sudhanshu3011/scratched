#include <stdio.h>
int hcf(int a, int b)
{

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
            {
                b = b - a;
            }
    }
    return a;
}
int main()
{
    int a, b,c;
    printf("Enter 1st no. :");
    scanf("%d",&a);
    printf("Enter 2nd no. :");
    scanf("%d",&b);
    c = hcf(a, b);

    printf("The HCF of given no. is:%d", c);
    return 0;
}