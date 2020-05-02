#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    for (int i = 0; i < argc; i++)
    {
        printf("arg %d is %s\n", i, argv[i]);
    }

    printf("\n\n");

    for (i = 0; i < argc; i++)
    {
    printf("arg %d is %s\n", i, *argv);
        argv += 1;

    }

    return 0;
}