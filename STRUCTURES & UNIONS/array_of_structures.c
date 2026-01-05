#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter roll and name of student %d: ", i + 1);
        scanf("%d %[^\n]", &s[i].roll, s[i].name);
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll: %d  Name: %s\n", s[i].roll, s[i].name);
    }

    return 0;
}
