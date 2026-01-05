#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    fscanf(fp, "%d %[^\n] %f", &s.roll, s.name, &s.marks);

    printf("Student Details:\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f",
           s.roll, s.name, s.marks);

    fclose(fp);
    return 0;
}
