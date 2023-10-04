/* MAJE PROBLEM
 A FRIEND AT A TOP RIGHT MOST CORNER NEED TO MEET A FRIEND AT DOWMWARDS LEFT MOST CORNER WHERE THE PERSON CAN ONLY MOVE LEFT WARDS 
 AND DOWNWARDS.  */
#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightway=0;
    int downway=0;

    if(cr==er && cc==ec)
    {
        return 1;
    }
    if(cr==er)
    {
        rightway+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        downway+=maze(cr+1,cc,er,ec);
    }
    if(cc<ec && cr<er){
       rightway+=maze(cr,cc+1,er,ec);
       downway+=maze(cr+1,cc,er,ec);
    }

    return rightway+downway;
}
int main()
{
    int er,ec;
    printf("Enter the total number of rows:");
    scanf("%d",&er);
    printf("Enter the total number of colomns:");
    scanf("%d",&ec);
    printf("Total no of possible ways are %d",maze(1,1,er,ec));
     return 0;
}
