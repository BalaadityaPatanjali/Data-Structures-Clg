#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100000

int main() {
    int randomArray[ARRAY_SIZE];
    srand(time(NULL));

    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomArray[i] = rand() % 1000 + 1;  // Random values between 1 and 1000
    }

    // Measure execution time
    clock_t startTime = clock();

    // Find max and min elements
    int maxElement = randomArray[0];
    int minElement = randomArray[0];

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (randomArray[i] > maxElement) {
            maxElement = randomArray[i];
        } else if (randomArray[i] < minElement) {
            minElement = randomArray[i];
        }
    }

    // Calculate execution time
    double executionTime = (double)(clock() - startTime) / CLOCKS_PER_SEC;

    // Print results
    printf("1-D Array: [");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", randomArray[i]);  // Displaying a subset of the array
    }
    printf("...]\n");
    
    printf("Max Element: %d\n", maxElement);
    printf("Min Element: %d\n", minElement);
    printf("Execution Time: %.6f seconds\n", executionTime);

    return 0;
}
