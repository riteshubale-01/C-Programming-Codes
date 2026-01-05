#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // fgets(str, sizeof(str), stdin);
    scanf(" %[^\n]", str);

    printf("Length = %lu", strlen(str));
    return 0;
}
