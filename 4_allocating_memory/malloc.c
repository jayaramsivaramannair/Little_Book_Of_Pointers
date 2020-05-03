#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    char* s;
    int stringsize;

    stringsize = sizeof("hello");
    printf("size of 'hello' is %d\n", stringsize);
    s = malloc(stringsize);
    if (s != NULL)
    {
        strncpy(s, "hello", stringsize);
        printf("s is %s\n", s);
        s[0] = 'c';
        printf("s is now %s\n", s);
    } else {
        printf("malloc failed!\n");
    }

    return 0;
}