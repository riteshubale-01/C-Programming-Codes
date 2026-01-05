#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int v = 0, c = 0, d = 0, s = 0;

    // fgets(str, sizeof(str), stdin);
    scanf(" %[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9')
            d++;
        else if (str[i] == ' ')
            s++;
        else if (strchr("aeiouAEIOU", str[i]))
            v++;
        else if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            c++;
    }

    printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d", v, c, d, s);
    return 0;
}
