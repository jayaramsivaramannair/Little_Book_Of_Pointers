#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STACKSIZE 5

typedef struct {
    int a;
    double b;
} DATA;

DATA* base;
DATA* end;
DATA* top;

int push (DATA* data) //Adds items to the stack
{
    int ok;

    if (top == end)
    {
        ok = 0;
    } else {
        memcpy(top, data, sizeof(DATA));
        top = top + 1;
        ok = 1;
    }
    return ok;
}

DATA* pop() //Takes off an item from the stack
{
    DATA* data;

    if (top == base)
    {
        data = NULL;
    } else {
        top = top - 1;
        data = top;
    }
    return data;
}

int main()
{
    DATA data, *pdata;

    base = (DATA*)malloc(STACKSIZE * sizeof(DATA));
    end = base + STACKSIZE;
    top = base;

    //add data items to the stack until the stack memory is exhausted
    for (int i = 0; ; i++)
    {
        data.a = i;
        data.b = i * 2;
        if(!push(&data)) {
            break;
        }
    }

    printf("first item = %d : %f\n", base->a, base->b);
    pdata = base + 4; // count 4 items up from the 1st struct (at base)
    printf("last item = %d : %f\n\n", pdata->a, pdata->b);

    do {
        pdata = pop();
        if (pdata != NULL)
        {
            printf("data popped is %d : %f\n", pdata->a, pdata->b);
        }
    } while (pdata != NULL);

    free(base);

    return 0;
}

