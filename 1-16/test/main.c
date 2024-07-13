#include <stdio.h>

int main() {
    char foo[10];  // Declaration of an array of 10 characters

    // Assigning values to the array
    foo[0] = 'H';
    foo[1] = 'e';
    foo[2] = 'l';
    foo[3] = 'l';
    foo[4] = 'o';
    foo[5] = '\0';  // Null-terminating the string

    // Printing the array as a string
    printf("%s\n", foo);  // Output: Hello

    // Printing individual elements
    for (int i = 0; i < 10; i++) {
        printf("foo[%d] = %c\n", i, foo[i]);
    }

    return 0;
}
