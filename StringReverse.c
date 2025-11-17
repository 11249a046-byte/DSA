#include <stdio.h>
#include <string.h>

/*
===========================================================
                        AIM
===========================================================
To write a C program to reverse a given string 
without using the built-in strrev() function.

===========================================================
                      ALGORITHM
===========================================================
1. Start the program.
2. Read a string from the user.
3. Initialize two variables:
      start = 0 
      end = length of string - 1
4. Repeat while start < end:
      a) Swap the characters at positions 'start' and 'end'.
      b) Increment 'start' and decrement 'end'.
5. After the loop ends, the string will be reversed.
6. Display the reversed string on the screen.
7. Stop the program.

===========================================================
                        PROGRAM
===========================================================
*/

void reverseString(char *text) {
    int start = 0;
    int end = strlen(text) - 1;

    while (start < end) {
        char temp = text[start];
        text[start] = text[end];
        text[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char input[256];
    printf("Enter a string: ");

    if (fgets(input, sizeof(input), stdin)) {
        size_t length = strlen(input);
        if (length > 0 && input[length - 1] == '\n') {
            input[length - 1] = '\0'; // Remove newline character
        }

        reverseString(input);
        printf("Reversed string: %s\n", input);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

/*
===========================================================
                        OUTPUT
===========================================================

Example 1:
-----------
Enter a string: hello
Reversed string: olleh

Example 2:
-----------
Enter a string: programming
Reversed string: gnimmargorp

Example 3:
-----------
Enter a string: Sandeep Kumar
Reversed string: ramuK peednaS

===========================================================
*/
