//20, Excercise 1-8 Write a program to count blanks, tabs, and newlines

#include <stdio.h>
//Exercise 1..8. Write a program to count blanks, tabs, and newlines
int main() {
    int c;
    int white_space = 0, tab = 0, new_line;
    
    while ( ((c = getchar()) != EOF )) {
        if (c == ' ')
            ++white_space;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++new_line;
    }
    printf("\n%d white spaces; %d tabs; %d new lines;\n", white_space, tab, new_line);
    return 0;
}