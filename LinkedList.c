#include <stdio.h>
#include <stdlib.h>

/*
===========================================================
                        AIM
===========================================================
To write a C program to implement a singly linked list with
operations such as insertion at beginning, insertion at end,
insertion at a given position, deletion of a node by value,
and displaying the list.

===========================================================
                      ALGORITHM
===========================================================
1. Start the program.
2. Define a structure 'Node' with members:
      - data (integer)
      - next (pointer to next node)
3. Create a function CreateNode() to allocate memory for a new node.
4. Implement the following operations:
      a) InsertAtBeginning:
         - Create a new node and make its next point to the current head.
         - Update head to the new node.
      b) InsertAtEnd:
         - Traverse to the last node and link the new node at the end.
      c) InsertAtPosition:
         - Traverse up to (position - 1) and insert the new node.
      d) DeleteNode:
         - Find the node with the given value and remove it from the list.
      e) DisplayList:
         - Traverse and print all nodes from head to NULL.
5. In main(), display a menu for user choice and perform the selected operation.
6. Repeat until the user chooses to exit.
7. Stop the program.

===========================================================
                        PROGRAM
===========================================================
*/

struct Node {
    int data;
    struct Node *next;
};

struct Node *CreateNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void InsertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = CreateNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Node with data %d inserted at beginning.\n", data);
}

void InsertAtEnd(struct Node **head, int data) {
    struct Node *newNode = CreateNode(data);
    if (*head == NULL) {
        *head = newNode;
        printf("Node with data %d inserted at end.\n", data);
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    printf("Node with data %d inserted at end.\n", data);
}

void InsertAtPosition(struct Node **head, int data, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 1) {
        InsertAtBeginning(head, data);
        return;
    }
    struct Node *prev = *head;
    for (int k = 1; k < position - 1 && prev != NULL; k++)
        prev = prev->next;
    if (prev == NULL) {
        printf("Position out of range!\n");
        return;
    }
    struct Node *newNode = CreateNode(data);
    newNode->next = prev->next;
    prev->next = newNode;
    printf("Node with data %d inserted at position %d.\n", data, position);
}

void DeleteNode(struct Node **head, int value) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = *head;
    if (temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("Data %d deleted.\n", value);
        return;
    }
    struct Node *prev = *head;
    while (prev->next != NULL) {
        if (prev->next->data == value) {
            temp = prev->next;
            prev->next = temp->next;
            free(temp);
            printf("Data %d deleted.\n", value);
            return;
        }
        prev = prev->next;
    }
    printf("Element %d not found.\n", value);
}

void DisplayList(struct Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int choice, data, pos;
    while (1) {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete by Value\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                InsertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                InsertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &pos);
                InsertAtPosition(&head, data, pos);
                break;
            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &data);
                DeleteNode(&head, data);
                break;
            case 5:
                DisplayList(head);
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

/*
===========================================================
                        OUTPUT
===========================================================

--- Linked List Menu ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete by Value
5. Display List
6. Exit
Enter your choice: 1
Enter data: 10
Node with data 10 inserted at beginning.

Enter your choice: 2
Enter data: 20
Node with data 20 inserted at end.

Enter your choice: 3
Enter data and position: 15 2
Node with data 15 inserted at position 2.

Enter your choice: 5
Linked List: 10 -> 15 -> 20 -> NULL

Enter your choice: 4
Enter value to delete: 15
Data 15 deleted.

Enter your choice: 5
Linked List: 10 -> 20 -> NULL

Enter your choice: 6
Exiting...

===========================================================
*/
