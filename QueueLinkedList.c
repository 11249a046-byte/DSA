#include <stdio.h>
#include <stdlib.h>

/*
===========================================================
                        AIM
===========================================================
To write a C program to implement a Queue using Linked List 
with operations such as Enqueue (Insert), Dequeue (Delete), 
and Display the queue elements along with their addresses.

===========================================================
                      ALGORITHM
===========================================================
1. Start the program.
2. Define a structure 'Node' with:
      - data (to store integer value)
      - next (pointer to next node)
3. Maintain two pointers:
      - front → points to the first node.
      - rear  → points to the last node.
4. For Enqueue (Insertion):
      a) Create a new node using malloc.
      b) If queue is empty, set front and rear to new node.
      c) Otherwise, link the new node at the end and 
         update rear pointer.
5. For Dequeue (Deletion):
      a) If queue is empty, display "Queue is empty".
      b) Otherwise, delete the node pointed by front and 
         move front to the next node.
      c) If queue becomes empty after deletion, set rear = NULL.
6. For Display:
      a) Traverse from front to rear and display each node's 
         address, data, and next pointer.
7. Repeat menu options until user chooses Exit.
8. Stop the program.

===========================================================
                        PROGRAM
===========================================================
*/

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

// Function to create a new node
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

// Function to insert element into the queue (Enqueue)
void Enqueue(int data) {
    struct Node *newNode = CreateNode(data);
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Node with data %d enqueued successfully.\n", data);
}

// Function to delete element from queue (Dequeue)
void Dequeue() {
    if (front == NULL) {
        printf("Queue is empty, deletion cannot be performed.\n");
        return;
    }
    struct Node *temp = front;
    printf("Node with data %d dequeued successfully.\n", temp->data);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

// Function to display all nodes in the queue
void DisplayQueue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node *temp = front;
    printf("\nQueue Nodes:\n");
    while (temp != NULL) {
        printf("| Address=%p | Data=%d | Next=%p |\n", temp, temp->data, temp->next);
        temp = temp->next;
    }
}

int main() {
    int choice, data;

    while (1) {
        printf("\n--- Queue Using Linked List ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                Enqueue(data);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                DisplayQueue();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

/*
===========================================================
                        OUTPUT
===========================================================

--- Queue Using Linked List ---
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter data to enqueue: 10
Node with data 10 enqueued successfully.

Enter your choice: 1
Enter data to enqueue: 20
Node with data 20 enqueued successfully.

Enter your choice: 1
Enter data to enqueue: 30
Node with data 30 enqueued successfully.

Enter your choice: 3
Queue Nodes:
| Address=0x5622b4a02b70 | Data=10 | Next=0x5622b4a02b90 |
| Address=0x5622b4a02b90 | Data=20 | Next=0x5622b4a02bb0 |
| Address=0x5622b4a02bb0 | Data=30 | Next=(nil) |

Enter your choice: 2
Node with data 10 dequeued successfully.

Enter your choice: 3
Queue Nodes:
| Address=0x5622b4a02b90 | Data=20 | Next=0x5622b4a02bb0 |
| Address=0x5622b4a02bb0 | Data=30 | Next=(nil) |

Enter your choice: 4
Exiting...

===========================================================
*/
