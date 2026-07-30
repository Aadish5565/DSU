#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0, inWord = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t')
        {
            if (inWord == 0)
            {
                words++;
                inWord = 1;
            }
        } else
        {
            inWord = 0;
        }
    }

    printf("Number of words = %d", words);

    return 0;
}
