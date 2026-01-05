#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "\n%s", text);
    fclose(fp);

    printf("Data appended successfully");
    return 0;
}
