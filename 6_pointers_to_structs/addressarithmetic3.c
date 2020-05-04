#include <stdio.h>
#include <stdlib.h>
#define COUNT 4

typedef struct {
    int a;
    int c;
    double b;
    long long int d;

} MYSTRUCT;

int main(int argc, char** argv)
{
    printf("size of MYSTRUCT = %lu\n", sizeof(MYSTRUCT));
    MYSTRUCT* p;
    MYSTRUCT* q;
    void* v;

    p = (MYSTRUCT*)calloc(COUNT, sizeof(MYSTRUCT));
    v = p + 3;
    printf("v->a %d\n", ((MYSTRUCT*)v)->a);



    return 0;
}