#include <stdio.h>
#include <stdlib.h>

typedef struct listitem {
    struct listitem *next;
    struct listitem *prev;
    int data;
} LISTITEM;

typedef struct {
    struct listitem *first;
    struct listitem *last;
} LIST;

LIST list;

void enqueue(LISTITEM *item)
{
    LISTITEM *temp;
    temp = list.last;
    list.last = item;
    item->prev = temp;
    item->next = (LISTITEM*)&list;
    temp->next = item;
}

LISTITEM *dequeue() {
    LISTITEM *temp;
    temp = list.first;
    if (temp == (LISTITEM*)&list)
    {
        temp = NULL;
    } else {
        list.first = temp->next;
        list.first->prev = (LISTITEM*)&list;
    }
    return temp;     
}

int main()
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

    LISTITEM* ord = dequeue();

    if (ord != NULL)
    {
        printf("data is %d\n", ord->data);
        free(ord);
    }


    return 0;
}