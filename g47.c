/*Tina is learning about binary numbers and wants to understand how to manually convert a decimal number into its binary equivalent. She decides to write a program that reads a decimal number and converts it into binary. 



Write a program to convert a given decimal number to its binary equivalent and print the result.

Input format :
The input consists of a single integer n, representing the decimal number to be converted.

Output format :
The output consists of a string representing the binary equivalent of the input decimal number.*/


#include <stdio.h>

int main() {
    int decimal_input;
    int divisor = 1;
    int binary_output = 0;

    // Read the decimal input
    scanf("%d", &decimal_input);

    // Special case for 0
    if (decimal_input == 0) {
        printf("0\n");
        return 0;
    }

    // Find the highest power of 2 less than or equal to the decimal input
    while (divisor <= decimal_input) {
        divisor *= 2;
    }
    divisor /= 2;

    // Convert to binary and print
    while (divisor > 0) {
        if (decimal_input >= divisor) {
            printf("1");
            decimal_input -= divisor;
        } else {
            printf("0");
        }
        divisor /= 2;
    }

    printf("\n");

    return 0;
}
