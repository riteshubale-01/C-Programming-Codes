#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0, flag = 0;

    // fgets(s1, sizeof(s1), stdin);
    // fgets(s2, sizeof(s2), stdin);
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
