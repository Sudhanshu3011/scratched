#include<stdio.h>
#include<string.h>
//string library function
int main()
{
    char str[20],str1[20],str2[20],str3[20];
    printf("Enter 1st string:");
    gets(str);
    printf("Enter 2nd string:");
    gets(str1);
    strcat(str,str1);
    printf("%s\n",str);
    strcpy(str2,str);
    printf("%s\n",str2);
    printf("%d\n",strlen(str));
    strrev(str);
    printf("%s",str);
    strupr(str);
    printf("%s\n",str);
    strlwr(str1);
    printf("%s\n",str1);


     
     return 0;
}