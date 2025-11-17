#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

/*
===========================================================
                        AIM
===========================================================
To write a C program to convert an infix expression 
to postfix form and evaluate the postfix expression 
using stack operations.

===========================================================
                      ALGORITHM
===========================================================
1. Start the program.
2. Read the infix expression from the user.
3. For each character in the infix expression:
      a) If it is an operand (letter or digit), 
         add it to the postfix string.
      b) If it is '(', push it onto the stack.
      c) If it is ')', pop and add to postfix 
         until '(' is found.
      d) If it is an operator (+, -, *, /), 
         pop operators from the stack with higher or 
         equal precedence and add to postfix.
         Then push the current operator.
4. After scanning the entire infix expression,
   pop any remaining operators from the stack to postfix.
5. Display the postfix expression.

6. To evaluate the postfix expression:
      a) For each symbol in the postfix expression:
          - If it is a digit, push it to the stack.
          - If it is an operator, pop two values,
            perform the operation, and push the result.
      b) The final value in the stack is the result.
7. Display the evaluated result.
8. Stop the program.

===========================================================
                        PROGRAM
===========================================================
*/

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return (top == -1) ? '\0' : stack[top--];
}

int priority(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    int k = 0;
    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];
        if (isalnum(c))
            postfix[k++] = c;
        else if (c == '(')
            push(c);
        else if (c == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[k++] = pop();
            pop();
        } else {
            while (top != -1 && priority(stack[top]) >= priority(c))
                postfix[k++] = pop();
            push(c);
        }
    }
    while (top != -1)
        postfix[k++] = pop();
    postfix[k] = '\0';
}

int evalPostfix(char *postfix) {
    int s[MAX], t = -1;
    for (int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];
        if (isdigit(c))
            s[++t] = c - '0';
        else {
            int b = s[t--], a = s[t--];
            switch (c) {
                case '+': s[++t] = a + b; break;
                case '-': s[++t] = a - b; break;
                case '*': s[++t] = a * b; break;
                case '/': s[++t] = a / b; break;
            }
        }
    }
    return s[t];
}

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);
    printf("Result: %d\n", evalPostfix(postfix));

    return 0;
}

/*
===========================================================
                        OUTPUT
===========================================================

Example 1:
-----------
Enter infix expression: 3+5*2
Postfix expression: 352*+
Result: 13

Example 2:
-----------
Enter infix expression: (4+2)*3
Postfix expression: 42+3*
Result: 18

Example 3:
-----------
Enter infix expression: 9-5+2
Postfix expression: 95-2+
Result: 6

===========================================================
*/
