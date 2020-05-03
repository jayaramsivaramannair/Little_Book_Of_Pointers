#include <stdio.h>

#define COUNT 4

int a[COUNT];
float b[COUNT];
double c[COUNT];
long long int d[COUNT];
short int e[COUNT];
long int f[COUNT];

int main(int argc, char** argv)
{
    int *pa;
    float *pb;
    double *pc;
    long long int *pd;
    short int *pe;
    long int *pf;

    pa = a;
    pb = b;
    pc = c;
    pd = d;
    pe = e;
    pf = f;

    for (int i = 0; i < COUNT; i++)
    {
        a[i] = i;
        b[i] = (float) i;
        c[i] = (double) i;
        d[i] = i;
        e[i] = i;
        f[i] = i;
    }

    pa += 1;
    printf("The value of pa is %p; the object pointed to by pa is %d\n", pa, *pa);
    pb += 1;
    printf("The value of pb is %p; the object pointed to by pb is %f\n", pb, *pb);
    pc += 1;
    printf("The value of pc is %p; the object pointed to by pc is %f\n", pc, *pc);
    pd += 1;
    printf("The value of pd is %p; the object pointed to by pd is %lld\n", pd, *pd);
    pe += 1;
    printf("The value of pe is %p; the object pointed to by pe is %i\n", pe, *pe);
    pf += 1;
    printf("The value of pf is %p; the object pointed to by pf is %ld\n", pf, *pf);

    return 0;
}