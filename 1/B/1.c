#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char str[])
{
    int i, j;
    char temp;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void uppercase(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
}

void lowercase(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char str1[100], str2[100], copy[100];
    char ch;
    char *result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string = %lu\n", strlen(str1));

    if (strcmp(str1, str2) == 0)
        printf("strcmp(): Both strings are equal.\n");
    else
        printf("strcmp(): Both strings are not equal.\n");

    strcpy(copy, str1);
    printf("strcpy(): Copied string = %s\n", copy);

    reverse(str1);
    printf("strrev(): Reversed string = %s\n", str1);

    strcat(str1, str2);
    printf("strcat(): Concatenated string = %s\n", str1);

    uppercase(str1);
    printf("strupr(): Uppercase string = %s\n", str1);

    lowercase(str1);
    printf("strlwr(): Lowercase string = %s\n", str1);

    printf("\nEnter a character to search: ");
    scanf(" %c", &ch);

    result = strchr(str1, ch);

    if (result != NULL)
        printf("strchr(): Character '%c' found in the string.\n", ch);
    else
        printf("strchr(): Character '%c' not found in the string.\n", ch);

    return 0;
}
