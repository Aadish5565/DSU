#include <stdio.h>

int main()
{
    int n, i, j;
    int maxOR = 0, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            result = a[i] | a[j];

            if (result > maxOR)
            {
                maxOR = result;
            }
        }
    }

    printf("Maximum OR value = %d\n", maxOR);

    return 0;
}
