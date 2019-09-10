#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("data.txt" ,"r");

    char *stringRead;
    unsigned long large;
    unsigned long large2;
    // fscanf(file, "%lu%lu", large);
    fscanf(file, "%lu %lu %s", &large, &large2, stringRead);
    printf( "%lu\n%lu\n%s\n", large, large2, stringRead);

    // fscanf(file, "%lu", large);
    // printf("%lu\n", large);

    fclose(file);
    return 0;
}