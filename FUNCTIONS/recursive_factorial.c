#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Factorial = %lld", factorial(num));
    return 0;
}
