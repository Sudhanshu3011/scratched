#include <stdio.h>
#include <string.h>
//delete the character
int main()
{
    char str[30], ch, ch1;
    int i, j, l = 0;
    printf("Enter a string:");
    gets(str);
    printf("Enter the character you delete:");
    ch = getchar();
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for (j = i; j < str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    puts(str);
    return 0;
}