#include <stdio.h>

int main()
{
    int a[5], i;
    int even = 0, odd = 0;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}
