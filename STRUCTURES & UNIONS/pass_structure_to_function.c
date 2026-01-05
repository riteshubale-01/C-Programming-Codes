#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void display(struct Student s) {
    printf("Roll: %d\nMarks: %.2f", s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter roll and marks: ");
    scanf("%d %f", &s.roll, &s.marks);

    display(s);

    return 0;
}
