#include <stdio.h>

int main() {
    char str[100];
    char *p = str;

    // fgets(str, sizeof(str), stdin);
    scanf(" %[^\n]", str);

    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }

    return 0;
}
