#include<stdio.h>
//increasing order
void increasing(int n)
{
 { if(n==0){
        return ;
    }
    increasing(n-1);
    printf("%d\n",n);
 }

    printf("%d\n",n);
    increasing(n-1);
    return ;
}
int main()
{
     int n;
     printf("Enter the number:");
     scanf("%d",&n);
     increasing(n);
     return 0;
}