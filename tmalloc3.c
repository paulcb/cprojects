#include <stdlib.h>
#include <stdio.h>

typedef struct List_
{
    char *name;
    int number;
    int number2;
    struct List_ *next;
} List;

void mallocMaxInts(int maxInts, List *list)
{
    printf("alloc size %d\n", sizeof(List));
    int i = 0;
    List *currentPtr = list;
    while (1)
    {
        if (i >= maxInts)
        {
            break;
        }

        List *listItem = malloc(sizeof(List));
        (*listItem).number = i;
        (*listItem).number2 = i;
        (*listItem).name = "paul";
        (*currentPtr).next = listItem;
        currentPtr = listItem;
        // printf("%d %d\n", newInt, *newInt);
        i++;
    }

    printf("free\n");

}

void freeList2(List *head){
    List *currentPtr = head->next;
    int i=0;
    while (1)
    {
        if ((*currentPtr).next == NULL)
        {
            free(currentPtr);
            break;
        }

        printf("%d %s\n", (*currentPtr).next, (*currentPtr).name);
        List *temp = currentPtr;
        currentPtr = (*currentPtr).next;
        free(temp);
        i++;
    }
}

void freeList(List *head){
    List *p, *q;
    for(p = head; p != NULL; p = q){
        q = p->next;
        free(p);
    }
}

int main(void)
{
    int memMax = (100 * 1000) * 1000;
    int maxInts = memMax / sizeof(int);

    printf("start\n");
    printf("Int size %d\n", sizeof(int));
    printf("max ints %d\n", maxInts);
    List *list = malloc(sizeof(List));
    list->number = 1;
    list->next = NULL;

    // mallocMaxInts(maxInts, list);
    mallocMaxInts(100, list);
    freeList(list);
    return 0;
}