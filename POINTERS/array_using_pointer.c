#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}
