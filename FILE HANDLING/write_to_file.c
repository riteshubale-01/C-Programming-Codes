#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Data written to file successfully");
    return 0;
}
