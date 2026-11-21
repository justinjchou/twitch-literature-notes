#include <stdio.h>

/* Removes quotes & spaces and converts to hyphens */
/* Get the title copied and convert to title for notes markdown */
// TODO file make (chapter 7)
#define MAXTITLE 1000

int main() {
    int c; 
    int i = 0;
    int whitespace_count;
    char title[MAXTITLE];

    printf("Input the Title \n");

    while ((c = getchar()) != EOF) {
        title[i] = c;
        ++i;
    }
    title[i + 1] = '\0';
    printf("%s", title);
    char title_changed[i + 1];
    i = 0;
    for (int j = 0; j < MAXTITLE; ++j) {
        title_changed[j] = title[i];
        /*
        if (title[i] == '"')
        {}
        else if (title[i] == ' ' ||  title[i] == '\n' || title[i] == '-' || title[i] == ',')
        {
            ++whitespace_count;
            if (whitespace_count == 1) {
                putchar('-');
            }
        }
        else 
        {
            whitespace_count = 0;
            putchar(title[i]);
        }
        */
    }
    // printf("%s", title_changed);
    printf(".md");
    printf("\n");
}
