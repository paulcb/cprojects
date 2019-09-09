#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int size = 8000000;
    int *ptrs[size];
    // int *ptr;
    int i;

    printf("start\n");
    printf("Int size %d\n", sizeof(int));

    for (i = 0; i < size; i++)
    {
        int *ptr = malloc(sizeof(int));
        if(ptr == NULL){
            printf("%d\n", i);
            ptrs[i] = NULL;
            continue;
        }
        *ptr = i;
        ptrs[i] = ptr;
        // printf("%d %d\n", ptr, *ptr);
    }

    for (i = 0; i < size; i++)
    {
        if(ptrs[i] != NULL){
            free(ptrs[i]);
        }
    }

    return 0;
}