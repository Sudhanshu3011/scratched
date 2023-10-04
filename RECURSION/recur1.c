#include<stdio.h>
//factorial
int fact(int n)
{
    int f;
    if(n==1){
    return 1;}
    return n*fact(n-1) ;

     
}
int main()
{
    int n;
    printf("Enter the no.:");
    scanf("%d",&n);
    printf("The factorial of given no. is%d :%d",n,fact(n));
     
    return 0;
}