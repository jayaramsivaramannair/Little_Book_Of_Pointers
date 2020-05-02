#include <stdio.h>
#define LENGTH 3

int main(int argc, char **argv)
{
    int data[LENGTH];
    int* pi;
    int** ppi; 

    for(int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }

    for(int i = 0; i < LENGTH; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    pi = data;
    ppi = &pi;

    //Using a loop to iterate through each element of the array
    for(int i = 0; i < LENGTH; i++)
    {
        pi += i;
        printf("array address is %p\n", data);
        printf("item pointed to by pi is %d\n", *pi);
        printf("item pointed to by ppi is %p\n", *ppi);
        printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value of ppi (what it points to) is \
               %p\n\n", &pi, ppi);
    }

    return 0;
}