#include <stdio.h>
#define LENGTH 3
char *words[LENGTH]; //pointer to an array of strings of size LENGTH

int main(int argc, char **argv)
{
    char *pc; // pointer to a character
    char **ppc; //pointer to a pointer to a character

    printf("multiple indirection example\n");

    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";

    for(int i = 0; i < LENGTH; i++)
    {
        printf("%s\n", words[i]);
    }

    ppc = words; //Words is the address to the first element in the array

    for (int i = 0; i < LENGTH; i++)
    {
        ppc = words + i;
        pc = *ppc;
        while (*pc != 0)
        {
            printf("%c ", *pc);
            pc += 1;
        }
        printf("\n");
    }
    
    return 0;
}