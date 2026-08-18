#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char str[50][100];
    char temp[100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
