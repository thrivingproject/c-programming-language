// Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text

/* Note: readchar() reads and removes characters from the input buffer */
#include <stdio.h>
#define MAX_LINE_LEN 1000

int get_line(char cur_line[], int max_line_len);
void copy(char longest[], char cur_line[]);

int main()
{
    int cur_len;
    int max_len;
    char cur_line[MAX_LINE_LEN];
    char longest[MAX_LINE_LEN];

    max_len = 0;
    while ((cur_len = get_line(cur_line, MAX_LINE_LEN)) > 0)
    {
        printf("Length of input line: %d\n", cur_len);
        if (cur_len > max_len)
        {
            max_len = cur_len;
            copy(longest, cur_line);
        }
    }
    if (max_len > 0)
    {
        printf("%s", longest);
    }
    return 0;
}

/* read a line into `cur_line`, return lenth */
int get_line(char cur_line[], int max_line_len)
{
    int c, i;

    for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        cur_line[i] = c;
    }

    if (c == '\n')
    {
        cur_line[i] = c;
        ++i;
    }
    cur_line[i] = '\0';
    return i;
}

/* copy `cur_line` into `longest` */
void copy(char longest[], char cur_line[])
{
    int i;

    i = 0;
    while ((longest[i] = cur_line[i]) != '\0')
    {
        ++i;
    }
}