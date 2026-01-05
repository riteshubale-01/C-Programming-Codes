#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    // fgets(s1, sizeof(s1), stdin);
    scanf(" %[^\n]", s1);

    strcpy(s2, s1);
    printf("%s", s2);
    return 0;
}
