#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    char *s;
    int i;

    i = sizeof("hello");
    s = (char*)malloc(i);

    if (s != NULL)
    {
        strncpy(s, "hello", i);
        printf("s is %s\n", s);
    } else {
        printf("malloc failed\n");
    }
    

    i = sizeof("hello world");
    s = (char*)realloc(s, i);

    if (s != NULL)
    {
        strcat(s, " world");
        printf("s is %s\n", s);

    } else {
        printf("realloc failed\n");
    }

    return 0;
}