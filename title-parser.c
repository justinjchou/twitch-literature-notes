#include <stdio.h>

/* Removes quotes & spaces and converts to hyphens */
/* Get the title copied and convert to title for notes markdown */
// TODO file make (chapter 7)
int main() {
    int c;

    printf("Input the Title \n");

    while ((c = getchar()) != '\n') {
        /* Removed the quotations */
        if (c == '"')
        {}
        else if (c == ' ')
        {
            putchar('-');
        }
        else 
        {
            putchar(c);
        }
    }
    printf(".md");
}
