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
int main()
{
    int n,r,l,j,k;
    printf("Enter n =");
    scanf("%d", &n);
    printf("Enter r =");
    scanf("%d", &r);
    l= fact(n);
    j=fact(r);
    k=fact(n-r);
    printf("The nCr is value %d", l/(j*k));
    return 0;

}