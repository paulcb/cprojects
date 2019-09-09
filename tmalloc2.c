#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int size = 2000000;
    int *ptrs[size];
    // int *ptr;
    int i;

    printf("start\n");
    printf("I slept\n");
    printf("Int size %d\n", sizeof(int));

    int *ptr = malloc(sizeof(int));
    printf("%d %d\n", ptr, *ptr);

    int *ptr2 = malloc(sizeof(int));
    printf("%d %d\n", ptr2, *ptr2);

    free(ptr);
    free(ptr2);

    printf("alloc\n");
    i = 0;
    while(1){
        if(i >= size){
            break;
        }

        int *newInt = malloc(sizeof(int));
        *newInt = i;
        // printf("%d %d\n", newInt, *newInt);
        ptrs[i] = newInt;
        i++;
    }

    printf("free\n");
    i = 0;
    while(1){
        if(i >= size){
            break;
        }

        // printf("%d %d\n", ptrs[i], *ptrs[i]);
        free(ptrs[i]);
        i++;
    }

    return 0;
}