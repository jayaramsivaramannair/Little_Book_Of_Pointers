#include <stdio.h>

int main(int argc, char **argv)
{
    int num;
    int* numPtr;
    int num2;

    num = 100;
    numPtr = &num; //Assigning the address of variable num to the pointer variable
    num2 = *numPtr; // Deferencing the pointer and assigning the value to num2
    printf("num=%d, numPtr=%p, address of num=%p, num2=%d\n",
           num, numPtr, &num, num2);

    return 0;
}