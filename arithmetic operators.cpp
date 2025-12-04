#include <stdio.h>

int main() {
    int num1, num2;
    
    // Read two integers (space-separated)
    scanf("%d %d", &num1, &num2);
    
    // Perform arithmetic operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quot = num1 / num2; // Integer division
    int rem = num1 % num2;
    
    // Print results
    printf("Sum:%d
", sum);
    printf("Difference:%d
", diff);
    printf("Product:%d
", prod);
    printf("Quotient:%d
", quot);
    printf("Remainder:%d
", rem);
    
    return 0;
}

