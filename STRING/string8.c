#include <stdio.h>
#include <string.h>
//searching a string
int main()
{
    char str[10][20];
    char fin[20];
    int i,j, n, flag = 0;
    printf("How many string you need to enter:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d string:", i + 1);
        scanf("%s", str[i]);
    }
    printf("Enter the string want to find:");
    scanf("%s", fin);
    for (i = 0; i < n; i++)
    {
        if (strcmp(fin, str[i]) == 0)
        {
            i = j;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("the given string %s is found at %d position.", fin, j+1);
    else
        printf("the given string %s is not found.", fin);
    return 0;
}