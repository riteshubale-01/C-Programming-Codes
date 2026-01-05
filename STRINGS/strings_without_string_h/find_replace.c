#include <stdio.h>

int main() {
    char str[200];
    char find, replace;
    int i = 0, count = 0;

    // fgets(str, sizeof(str), stdin);
    scanf(" %[^\n]", str);

    printf("Enter character to find: ");
    scanf(" %c", &find);

    printf("Enter character to replace with: ");
    scanf(" %c", &replace);

    while (str[i] != '\0') {
        if (str[i] == find) {
            str[i] = replace;
            count++;
        }
        i++;
    }

    if (count == 0)
        printf("Character not found\n");
    else
        printf("Updated string: %s\nReplacements done: %d", str, count);

    return 0;
}
