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
    LISTITEM *temp;

	// first, make an empty queue
	// ... which is a queue where the header points to itself and there are no items in it
	list.first = (LISTITEM*)&list;
	list.last = (LISTITEM*)&list;

	for (int i = 0; i < 3; i++) {	// as before, populate the queue
		temp = (LISTITEM*)malloc(sizeof(LISTITEM)); // allocate some memory for the new queue item
		temp->data = i;				// set the item's data to the loop count so that we can see where it is in the queue
		enqueue(temp);				// and put it in the queue
	}

	printf("first item = %d\n", list.first->data);
	printf("last item = %d\n\n", list.last->data);

	// now let's dequeue from the end of the queue
	do {							// keep going until the queue is empty
		temp = dequeue();			// if the queue is empty we will get NULL returned
		if (temp != NULL) {
			printf("data is %d\n", temp->data);
			free(temp);				// call 'free' to tidy up 
		}
	} while (temp != NULL);

	return 0;
}