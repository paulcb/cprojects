#include <stdlib.h>
#include <stdio.h>

typedef struct List_ {
    // char *data[];
    int number;
    struct List_ *next;
} List;

void mallocMaxInts(int maxInts, List list){
    printf("alloc\n");
    int i = 0;
    List *currentPtr = &list;
    while(1){
        if(i >= maxInts){
            break;
        }

        List *listItem = malloc(sizeof(List));
        (*listItem).number = i;
        (*currentPtr).next = listItem;
        currentPtr = listItem;
        // printf("%d %d\n", newInt, *newInt);
        i++;
    }

    printf("free\n");
    i = 0;
    free(list.next);
    // while(1){
        // if((*currentPtr).next == NULL){
        //     free(currentPtr);
        //     break;
        // }
        
        // List *temp = currentPtr;
        // (*currentPtr).next;


        // printf("%d %d\n", ptrs[i], *ptrs[i]);
        // i++;
    // }
}



int main(void)
{
    int memMax = (600 * 1000) * 1000;
    int maxInts = memMax / sizeof(int);

    printf("start\n");
    printf("Int size %d\n", sizeof(int));
    printf("max ints %d\n", maxInts);
    List list;
    list.number = 1;
    list.next = NULL;

    // mallocMaxInts(maxInts, list);
    mallocMaxInts(100000, list);
    return 0;
}