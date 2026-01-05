#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File error");
        return 0;
    }

    printf("Enter roll, name, marks: ");
    scanf("%d %[^\n] %f", &s.roll, s.name, &s.marks);

    fprintf(fp, "%d %s %.2f", s.roll, s.name, s.marks);
    fclose(fp);

    printf("Student data saved");
    return 0;
}
