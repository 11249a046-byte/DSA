#include <stdio.h>
#define MAX 100

/*
===========================================================
                        AIM
===========================================================
To write a C program to implement stack operations such as 
PUSH, POP, PEEK, and checking if the stack is empty using arrays.

===========================================================
                      ALGORITHM
===========================================================
1. Start the program.
2. Initialize an array 'stack[MAX]' and a variable 'top = -1'.
3. Define the following functions:
    a) push(x):
        - If top >= MAX - 1, display "Stack Overflow".
        - Else, increment top and insert element.
    b) pop():
        - If top < 0, display "Stack Underflow".
        - Else, return and remove the top element.
    c) peek():
        - If stack is empty, print message.
        - Else, return the top element.
    d) isEmpty():
        - Return 1 if top == -1, else 0.
4. In main(), perform operations based on user choice.
5. Stop the program.

===========================================================
                        PROGRAM
===========================================================
*/

int stack[MAX];
int top = -1;

void push(int x) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("%d pushed into stack.\n", x);
    }
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        printf("%d popped from stack.\n", value);
        return value;
    }
}

int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    } else {
        printf("Top element is %d\n", stack[top]);
        return stack[top];
    }
}

int isEmpty() {
    return top == -1;
}

int main() {
    int choice, value;

    printf("Stack Operations using Array\n");
    printf("-----------------------------\n");

    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Check Empty\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                if (isEmpty())
                    printf("Stack is empty.\n");
                else
                    printf("Stack is not empty.\n");
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

/*
===========================================================
                        OUTPUT
===========================================================

Example Run:
-------------
Stack Operations using Array
-----------------------------

1. Push
2. Pop
3. Peek
4. Check Empty
5. Exit
Enter your choice: 1
Enter value to push: 10
10 pushed into stack.

Enter your choice: 1
Enter value to push: 20
20 pushed into stack.

Enter your choice: 3
Top element is 20

Enter your choice: 2
20 popped from stack.

Enter your choice: 4
Stack is not empty.

Enter your choice: 5
Exiting program...

===========================================================
*/
