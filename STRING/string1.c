#include <stdio.h>
#include <conio.h>
#include <string.h>
//basic string
int main()
{
    char str1[20], str2[20], i, l, count = 0;
    printf("Enter a word:\n");
    scanf("%s", str1);
    for (i = 0; i< str1[i] != NULL; i++)
     {
         count++;
     }
     printf("the length of string is: %d", count);
    l = strlen(str1);
    printf("the length of string is: %d", l);

    return 0;
}