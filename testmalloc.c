#include <stdlib.h>
#include <stdio.h>

int main()
{
    int size = 10000000;
    int *ptrs[size];
    int *ptr;
    int i;
    for (i = 0; i < size; i++)
    {
        *ptr = (int*) malloc(sizeof(int));
        if(ptr == NULL){
            printf("%d\n", i);
            ptrs[i] = NULL;
            continue;
        }
        *ptr = 1;
        ptrs[i] = ptr;
        // printf("%d %d\n", somePtr, *somePtr);
    }

    for (i = 0; i < size; i++)
    {
        if(ptrs[i] != NULL){
            free(ptrs[i]);
        }
    }

    // ptr = (int *)malloc(sizeof(int));
    // printf("%d\n", ptr);

    // free(ptr);
    return 0;
}