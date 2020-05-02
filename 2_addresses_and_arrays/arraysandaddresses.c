#include <stdio.h>

int main(int argc, char **argv)
{
    char str1[] = "Hello";
    char* str2 = "Goodbye"; //Instead of using a char array, we can also use a pointer to char

    printf("%p %p %s\n", &str1, str1, str1);
    printf("%p %p %s\n", &str2, str2, str2);

    /*
    str2 = str1;

    printf("%p %p %s\n", &str1, str1, str1);
    printf("%p %p %s\n", &str2, str2, str2);
    */

    str2 = &str1[0];
    printf("%p %p %s\n", &str1, str1, str1);
    printf("%p %p %s\n", &str2, str2, str2);



    return 0;
}