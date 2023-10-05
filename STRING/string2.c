#include <stdio.h>
#include <conio.h>
#include <string.h>
//reverse the string
int main()
{
    char str[20], rev[20];
    int i, j, l;
    printf("Enter a string:\n");
    gets(str);
    l = strlen(str);
    for (i = l - 1, j = 0; i >= 0; i--, j++)
        rev[j] = str[i];
    //rev[j] = NULL;
    
    printf("The reverse of string is :%s", rev[j]);

        return 0;
}
