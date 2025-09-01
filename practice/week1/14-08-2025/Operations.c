#include <stdio.h>

int main() 
{
    int x = 10, y = 3;
    int sum, difference, product, remainder;
    float division;
    sum = x + y;
    difference = x - y;
    product = x * y;
    division = (float)x / y; 
    remainder = x % y;
    printf("x = %d, y = %d\n", x, y);
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %.2f\n", division);
    printf("Remainder: %d\n", remainder);
    x += 5; 
    printf("After x += 5, x is: %d\n", x);
    int a = 5;
    a++; 
    printf("After a++, a is: %d\n", a);
    --a;
    printf("After --a, a is: %d\n", a);
    return 0;
}
