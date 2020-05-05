#include <stdio.h>
#include <stdlib.h>

typedef struct listitem {
    struct listitem *next; //Pointer to the next item
    struct listitem *prev; //Pointer to the previous item
    int data;

} LISTITEM;

typedef struct {
    struct listitem *first; //Pointer to the first item
    struct listitem *last; //Pointer to the last item
} LIST;

LIST list;

int main(int argc, char** argv)
{
    LISTITEM* temp;

    list.first = (LISTITEM*)&list;
    list.last = (LISTITEM*)&list;

    for (int i = 0; i < 3; i++)
    {
        temp = (LISTITEM*)malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = list.first;
        list.first = temp;
        temp->prev = (LISTITEM*)&list;
        temp->next->prev = temp;
    }

    temp = list.first;
    while(temp != (LISTITEM*)&list)
    {
        printf("forward list item: current is %p; next is %p; prev is %p; data \
        is %d\n", temp, temp->next, temp->prev, temp->data);
        temp = temp->next;
    }
    temp = list.last;
    while (temp != (LISTITEM*)&list) {
        printf("backward list item: current is %p; next is %p; prev is %p; data \
        is %d\n", temp, temp->next, temp->prev, temp->data);
        temp = temp->prev;
    }

    return 0;
}