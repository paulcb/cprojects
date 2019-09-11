#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    // int c;

    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    //     printf("%i\n", c);
    // }

    long nc;
    printf("%i\n", EOF);
    nc = 0;
    int c = 0; 
    c = getchar();
    while (c != EOF){
        printf("%i\n", c);
        ++nc;
        c = getchar();

        if(c == EOF){
            
            break;
        }
    }
    printf("%ld\n", nc);

    return 0;
}
