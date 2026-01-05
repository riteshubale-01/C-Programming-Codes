#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    p->roll = 10;
    p->marks = 92.3;

    printf("Roll: %d\nMarks: %.2f", p->roll, p->marks);

    return 0;
}
