#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 1;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("Characters = %d\n", chars);
    printf("Words = %d\n", words);
    printf("Lines = %d", lines);

    return 0;
}
