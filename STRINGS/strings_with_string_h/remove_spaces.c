#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int j = 0;

    // fgets(str, sizeof(str), stdin);
    scanf(" %[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ')
            str[j++] = str[i];
    }
    str[j] = '\0';

    printf("%s", str);
    return 0;
}
