#include <stdio.h>
#include "fibonacci.h"

// Computes the fibonacci series using a for loop
// Then again recursively.
int main() {
    int entered = 0; // used for integer input
    do {
        printf("Enter the desired number of fibonacci numbers: \n");
        scanf("%d", &entered); // assuming I will enter the number correctly
        printf("You entered %d \n", entered);

        // check to see if program should terminate
        if (entered != -1)
        {
            // Find the series using a loop
            printf("The fibonacci series determined and printed using a for loop: \n");
            int result = fibonacci_loop(entered);
            printf("\nThe %d term in the fibonacci sequence starting with 0 is: %d\n\n", entered, result);

            // Find the series using recursion
            int result2 = 0;
            printf("The fibonacci series determined and printed using recursion: \n");
            for (int i = 0; i < entered; i++)
            {
                result2 = fibonacci_recursive(i); // Must pass the counter in order to print effectively
                printf("%d ", result2);
            }
            printf("\nThe %d term in the fibonacci sequence starting with 0 is: %d\n\n", entered, result2);
        }
    } while (entered != -1);
    return 0;
}