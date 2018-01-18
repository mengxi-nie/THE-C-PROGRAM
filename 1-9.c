#include <stdio.h>

int main() {
    int c;
    int ns;
    
    ns = 0;
    while((c = getchar()) != EOF){
        if (c == ' ' & ns < 1) {
            putchar(c);
            ++ns;
        }
        if (c == ' ' & ns >= 1) {
            ++ns;
            continue;
        }
        if (c != ' ' & ns >= 1) {
            putchar(c);
            ns = 0;
        }
        else putchar(c);
    }
    return 0;
}
