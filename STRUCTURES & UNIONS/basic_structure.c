#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;

    s.roll = 1;
    s.marks = 85.5;

    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f", s.marks);

    return 0;
}
