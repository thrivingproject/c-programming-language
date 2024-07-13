// Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines
#include <stdio.h>
#define BUFFER_SIZE 1000

int get_line(char[], int);
void remove_trailing_space(char[], int);

int main()
{
    char line[BUFFER_SIZE];
    int len;

    while ((len = get_line(line, BUFFER_SIZE)) > 0)
        remove_trailing_space(line, len);

    return 0;
}

/* read a line into `cur_line`, return length */
int get_line(char cur_line[], int max_line_len)
{
    int c, i;

    for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        cur_line[i] = c;

    if (c == '\n')
    {
        cur_line[i] = c;
        ++i;
    }
    cur_line[i] = '\0';
    return i;
}

/* removes trailing spaces from `line` */
void remove_trailing_space(char line[], int len)
{
    while (line[len - 2] == ' ' || line[len - 2] == '\t')
        --len;
    line[len - 1] = '\n';
    line[len] = '\0';
}