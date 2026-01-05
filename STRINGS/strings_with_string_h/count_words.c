#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int words = 1;

    // fgets(str, sizeof(str), stdin);
    scanf(" %[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            words++;
    }

    printf("Words = %d", words);
    return 0;
}
