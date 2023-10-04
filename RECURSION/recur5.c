#include<stdio.h>
//fibbonaci series
int fibbo(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return fibbo(n-1)+fibbo(n-2);
    
}
int main()
{
     int n;
     printf("Enter number of terms :");
     scanf("%d",&n);
     printf("%d",fibbo(n));
     return 0;
}