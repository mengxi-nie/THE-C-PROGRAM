#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXSIZE 10 /* max length of a word */
#define LENGTH 10 /* max count of words */

int main()
{
    int c, nw, state;
    int word[LENGTH];
    int j;
    
    state = OUT;
    j = nw = 0;
    for (int i = 0; i < LENGTH; ++i) {
        word[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        //putchar(c);
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++j;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        ++word[j];
    }
    
    /* print the result */
    printf("No.    LENGTH \n");
    for(int m = 0; m < LENGTH; ++m) {
        printf("%d    %d\n", m, word[m]);
    }
    
    return 0;
}
