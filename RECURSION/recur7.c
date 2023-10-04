/*STAIR PATH PROBLEM STATEMENT
 when the person can step up 1 or 2 or 3 stair at a time the total no of ways for given program.
 */
#include<stdio.h>
int stairpath(int n)
{
    if(n==1|| n==2 )
    {
        return n;
    }
    if(n==3)
    {
        return 4;
    }
    int totalways = stairpath(n-1)+stairpath(n-2)+stairpath(n-3);
    return totalways;
    
}
int main()
{
    int n;
    printf("Total number of stairs are:");
    scanf("%d",&n);
    printf("Total no of way to climb the stair are %d ." ,stairpath(n));
     
     return 0;
}