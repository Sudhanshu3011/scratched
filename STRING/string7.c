#include <stdio.h>
//changing the small letter to the capital
int main()
{
    char str[50],ustr[50];
    int i, j;
    printf("Enter a string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ustr[i] = str[i] - 32;
        }
        else
        {
            ustr[i] = str[i];
        }
    }
    //printf("the new string is %s:",ustr);
    puts(ustr);
    return 0;
}