//
// Created by rdnot on 10/28/2017.
//

#include <stdio.h>
#include "fibonacci.h"

/**
 * Prints the fibonacci sequence to the passed in index.
 * Returns the last value in the sequence.
 */
int fibonacci_loop(int num_nums) {
    int a = 1, b = 1;

    // Handle printing the initial values
    if (num_nums > 0)
        printf("%d ", 0);
    if (num_nums == 2)
        printf("%d ", 1);
    if (num_nums > 2) {
        for (int i = 0; i < 2; i++)
            printf("%d ", a);
    }

    for (int i = 1; i < num_nums - 2; i++) { // decided to start with 0 instead of 1
        int temp = a;
        a = a + b;
        b = temp;
        printf("%d ", a);
    }

    return a;
}

int fibonacci_recursive(int num_nums) {
    if (num_nums < 2)
        return num_nums;
    return fibonacci_recursive(num_nums - 1) + fibonacci_recursive(num_nums - 2);
}