#include <stdio.h>
#include <conio.h>
//reverse user defined function
void reverse(char s[])
{
    int i, j, temp, len = 0;
    while (s[len] != 0)
        len++;
    j = len - 1;
    for (i = 0; i < j; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
}
int main()
{
    char str[20];
    int len;
    printf("Enter the string:");
    gets(str);
    printf("The reverse of given string  %c is.", str);
    reverse(str);
    printf("%s", str);
    return 0;
}