#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 4

int main(int argc, char** argv)
{
    int *p;
    int a[COUNT];

    for (int i = 0; i < COUNT; i++)
    {
        a[i] = i; // Loop populates the array with 4 ints ranging from 0 to 3
    }

    p = a;
    printf("address of a is %p, value of p is %p, value pointed to by p is %d\n",
           a, p, *p);
    p = p + 1;
    printf("address of a is %p, value of p is %p, value pointed to by p is %d\n",
           a, p, *p);
    p = p + 1;
    printf("address of a is %p, value of p is %p, value pointed to by p is %d\n",
           a, p, *p);
    p = p + 1;
    printf("address of a is %p, value of p is %p, value pointed to by p is %d\n",
           a, p, *p);

    return 0;
}