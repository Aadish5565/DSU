#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50], search[50];
    int n, i, count = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter string to count: ");
    scanf("%s", search);

    for(i = 0; i < n; i++)
    {
        if(strcmp(str[i], search) == 0)
        {
            count++;
        }
    }

    printf("Number of occurrences of %s = %d", search, count);

    return 0;
}
