#include <stdio.h>

/*
===========================================================
                        AIM
===========================================================
To write a C program to search an element in a sorted array 
using Binary Search technique.

===========================================================
                      ALGORITHM
===========================================================
1. Start the program.
2. Read how many elements (n) the user wants to enter.
3. Read 'n' sorted numbers into an array.
4. Ask the user for the number to search (target).
5. Set two variables: left = 0 and right = n - 1.
6. Repeat while left <= right:
      a) Find mid = left + (right - left) / 2
      b) If arr[mid] == target → element found, return mid.
      c) If arr[mid] < target → move left to mid + 1.
      d) Else → move right to mid - 1.
7. If not found, return -1.
8. Display result on the screen.
9. Stop the program.

===========================================================
                        PROGRAM
===========================================================
*/

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;
    printf("Binary Search Program\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Number found at index %d\n", result);
    else
        printf("Number not found\n");

    return 0;
}

/*
===========================================================
                        OUTPUT
===========================================================

Example 1:
-----------
Binary Search Program
Enter number of elements: 5
Enter 5 sorted numbers:
10 20 30 40 50
Enter number to search: 30
Number found at index 2

Example 2:
-----------
Binary Search Program
Enter number of elements: 5
Enter 5 sorted numbers:
10 20 30 40 50
Enter number to search: 25
Number not found

===========================================================
*/
