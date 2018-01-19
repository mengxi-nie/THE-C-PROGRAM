#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXSIZE 10 /* max length of a word */
#define LENGTH 24 /* max count of words */

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
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        ++word[c - 'a'];
    }
    
    /* print the result */
    printf("No.    Frequence\n");
    for(int m = 1; m < LENGTH + 1; ++m) {
        printf("%d    %d\n", m, word[m-1]);
    }
    
    return 0;
}
