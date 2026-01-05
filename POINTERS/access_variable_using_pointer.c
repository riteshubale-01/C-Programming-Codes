#include <stdio.h>

int main() {
    int a = 25;
    int *ptr;

    ptr = &a;

    printf("a = %d\n", a);
    printf("Value using pointer = %d", *ptr);

    return 0;
}
