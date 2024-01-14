#include <stdio.h>

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Create a 1-D integer array
    int arr[100];

    // Enter values for the array elements
    printf("Enter %d values for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // a) Insert an element at a given position
    int insertElement, insertPosition;

    printf("\n\nEnter the element to insert: ");
    scanf("%d", &insertElement);

    printf("Enter the position to insert (1 to %d): ", size + 1);
    scanf("%d", &insertPosition);

    if (insertPosition < 1 || insertPosition > size + 1) {
        printf("Invalid position to insert.\n");
    } else {
        // Shift elements to make space for the new element
        for (int i = size; i >= insertPosition; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[insertPosition - 1] = insertElement;

        // Update the size of the array
        size++;

        // Display the array after insertion
        printf("\nArray after insertion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    // b) Delete an element present at a given position
    int deletePosition;

    printf("\n\nEnter the position to delete (1 to %d): ", size);
    scanf("%d", &deletePosition);

    if (deletePosition < 1 || deletePosition > size) {
        printf("Invalid position to delete.\n");
    } else {
        // Shift elements to fill the gap left by the deleted element
        for (int i = deletePosition - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Update the size of the array
        size--;

        // Display the array after deletion
        printf("\nArray after deletion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
