#include <stdio.h>

struct StructExample {
    int i;
    float f;
};

union UnionExample {
    int i;
    float f;
};

int main() {
    struct StructExample s;
    union UnionExample u;

    printf("Size of structure = %lu\n", sizeof(s));
    printf("Size of union = %lu", sizeof(u));

    return 0;
}
