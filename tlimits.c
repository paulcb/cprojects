#include <limits.h>
#include <stdio.h>

int main(){
    unsigned long large = ULONG_MAX;
    printf("%lu\n", large);
    printf("%lu\n", large + 1);

    
    return 0;
}