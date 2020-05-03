#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTRLEN 100

char* string_function(char* astring)
{
    char *s;
    s = (char*)malloc(MAXSTRLEN);
    s[0] = '\0'; // This is needed to initialize the buffer created by malloc
    strcat(s, "Hello ");
    strcat(s, astring);
    strcat(s, "\n");
    return s;
}

int main(int argv, char** argc)
{
    printf("%s", string_function("Fred"));
    printf("%s", string_function("Gussie Fink-Nottle"));

    return 0;
}