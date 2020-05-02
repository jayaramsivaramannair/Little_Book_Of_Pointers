#include <stdio.h>

int main(int argc, char** argv)
{
    //Pointer to a char initialized with a string literal. Use pointer to access individual chars
    char* pi = "Hello!"; //

    for(; *pi != 0; pi++)
    {
        printf("%c ", *pi);
    }
    printf("\n");

    //Pointer to a char array. Use pointers to access individual strings
    char* ppi[4] = {"Jayaram", "Sivaraman", "Nair", "Programmer"};

    for(int i = 0; i < sizeof(ppi)/sizeof(ppi[i]) ; i++)
    {
        printf("%s\n", ppi[i]);
    }

    return 0;
}