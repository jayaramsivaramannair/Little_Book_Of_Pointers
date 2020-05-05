#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listitem {
    struct listitem *next; // pointer to next item
    int data; //some data
} LISTITEM;

int main(int argc, char** argv)
{
    LISTITEM *listhead, *temp;

    listhead = NULL;

    for (int i = 0; i < 3; i++)
    {
        temp = (LISTITEM*)malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = listhead;
        listhead = temp;
        listhead = temp;
    }

    temp = listhead;
    while (temp != NULL)
    {
        printf("list item: \n\tcurrent is %p\n\tnext is %p\n\tdata is %d\n",
        temp, temp->next, temp->data);
        temp = temp->next;
    }

    return 0;
}