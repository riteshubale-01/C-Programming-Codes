#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    int max = *p;
    for (int i = 1; i < n; i++) {
        if (*(p + i) > max)
            max = *(p + i);
    }

    printf("Largest element = %d", max);
    return 0;
}
