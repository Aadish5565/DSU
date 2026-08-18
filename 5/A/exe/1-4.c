#include <stdio.h>

int main() {
    int n, i, j, temp;
    int swap = 0, comp = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
  
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            comp++;
            if(a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap++;
            }
        }
    }

    printf("\nSorted array (descending): ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nTotal swaps: %d", swap);
    printf("\nTotal comparisons: %d", comp);
    printf("\nLargest element: %d", a[0]);
    printf("\nSmallest element: %d", a[n - 1]);

    return 0;
}
