#include <stdio.h>
#define BUFFER_SIZE 1000

int get_line(char[], int);

int main()
{
    char s[BUFFER_SIZE];
    int len;

    while ((len = get_line(s, BUFFER_SIZE)) > 0)
        ;

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