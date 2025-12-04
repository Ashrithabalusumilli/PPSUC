#include <stdio.h>

int main() {
    int X, Y, Z;
    
    // Read inputs
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    
    // Calculate total money Romeo has
    int total_money = (X * 5) + (Y * 10);
    
    // Calculate maximum number of chocolates
    int chocolates = total_money / Z;
    
    // Print result
    printf("%d
", chocolates);
    
    return 0;
}
