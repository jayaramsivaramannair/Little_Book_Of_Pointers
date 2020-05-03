#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    char* s;
    int i;
    int* p;

    s = (char*)malloc(6);
    for (i = 0; i < 6; i++)
        printf("s[%d] = %d\n", i, s[i]);
    free(s);
    s = (char*)calloc(6, sizeof(char));
    for(i = 0; i < 6; i++)
        printf("s[%d] = %d\n", i, s[i]);
    free(s);
    p = (int*)calloc(6, sizeof(int));
    for(i = 0; i < 6; i++)
        printf("p[%d] = %d\n", i, p[i]);
    free(p);

    return 0;
}