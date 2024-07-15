// Write a function `reverse` that reverses the character string `s`. Use it to write a program that reverses its input a line at a time.
#include <stdio.h>
#define STR_SIZE 1000

void reverse(char[], int);
int get_line(char[], int);

int main()
{
    char s[STR_SIZE];
    int len;

    while ((len = get_line(s, STR_SIZE)) > 0)
    {
        reverse(s, len);
        printf("%s", s);
    }

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

/* reverses character string `s` using the length of `s` (assumes `s` includes newline character) */
void reverse(char s[], int len)
{
    int start = 0;
    int end = len - 2;

    char temp;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        ++start; --end;
    }
}

/* Original idea was to make a copy of the original and then replace one character at a time,
 * but it is actually quicker to swap characters back to front while progressing toward the middle of the string.
 */