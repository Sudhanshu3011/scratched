#include <stdio.h>
#include <string.h>
#include <conio.h>
//replace the character in the string
int main()
{
    char str[30], ch, ch1;
    int i, len = 0;
    printf("Enter a string:");
    gets(str);
    while (str[len] != 0)
        len++;
    printf("Enter thr character you want to find:");
    ch = getchar();
    getchar();
    printf("Enter thr character you want to replace with:");
    ch1 = getchar();
    // printf("%d",len);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            str[i] = ch1;
        }
    }
    printf("the new string is:");
    puts(str);

    return 0;
}