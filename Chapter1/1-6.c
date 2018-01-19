#include <stdio.h>
int main()
{
    int c;
    
    while (((c = getchar()) != EOF) == 1) {
        printf("getchar () != EOF equals to 1 \n ");
        putchar(c);
        printf("\n");
    }
    while (((c = getchar()) != EOF) == 0) {
        printf("getchar () != EOF equals to 0 \n ");
        putchar(c);
        printf("\n");
    }
    return 0;
    
}
