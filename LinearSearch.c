#include <stdio.h>

/* 
=====================================================================
                            AIM
=====================================================================
To write a C program that performs a Linear Search on a list of 
user-entered elements to find a specified target number.

=====================================================================
                           ALGORITHM
=====================================================================
1. Start the program.
2. Read the number of elements 'n' from the user.
3. Read 'n' elements and store them in an array 'arr[]'.
4. Read the element to be searched, called 'target'.
5. Initialize a loop variable 'i = 0'.
6. Repeat steps 7–8 while 'i < n':
     - If arr[i] == target, then
         • Print that the element is found at position (i + 1).
         • Stop the search.
     - Else, increment i by 1.
7. If the loop completes and no match is found,
   print that the element is not found.
8. End the program.

=====================================================================
                            PROGRAM
=====================================================================
*/

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int n, target;
    printf("Linear Search Program\n");
    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your numbers one by one:\n");
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search for: ");
    scanf("%d", &target);

    int result = linear_search(arr, n, target);

    if (result != -1)
        printf("\n%d is found at position %d.\n", target, result + 1);
    else
        printf("\n%d is not found in the list.\n", target);

    printf("Thank you for using the program.\n");
    return 0;
}

/*
=====================================================================
                            OUTPUT
=====================================================================

Output 1:
-----------
Linear Search Program
Enter how many numbers you want to store: 5
Enter your numbers one by one:
Number 1: 10
Number 2: 20
Number 3: 30
Number 4: 40
Number 5: 50
Enter the number you want to search for: 30

30 is found at position 3.
Thank you for using the program.


Output 2:
-----------
Linear Search Program
Enter how many numbers you want to store: 4
Enter your numbers one by one:
Number 1: 5
Number 2: 15
Number 3: 25
Number 4: 35
Enter the number you want to search for: 20

20 is not found in the list.
Thank you for using the program.
=====================================================================
*/
