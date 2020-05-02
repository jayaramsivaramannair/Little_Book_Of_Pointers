#include <stdio.h>
#define LENGTH 4

int main(int argc, char** argv)
{
    int data[LENGTH] = {1,2,3,4};

    void* gp; // a pointer to void

    gp = data; // gp is assigned address of the array

    for (int i = 0; i < LENGTH; i++)
    {
        printf("Value stored at the address %p is %d\n", (int*)gp + i, *((int*)gp + i));
    }

    return 0;
}