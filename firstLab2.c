#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Enter values for the array elements
    printf("Enter %d values for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // a) Traverse the array from first to last
    printf("\nTraversing the array from first to last:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // b) Traverse the array from last to first
    printf("\n\nTraversing the array from last to first:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // c) Search a particular element
    int searchElement;
    printf("\n\nEnter the element to search: ");
    scanf("%d", &searchElement);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            printf("Element %d found at index %d.\n", searchElement, i);
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
