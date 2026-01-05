#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Value of x = %d\n", x);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d", **pp);

    return 0;
}
