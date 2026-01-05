#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    // fgets(s1, sizeof(s1), stdin);
    // fgets(s2, sizeof(s2), stdin);
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);

    if (strcmp(s1, s2) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
