#include <stdio.h>

#define PI 3.14159

int main() 
{
    int age = 25;
    char grade = 'A';
    float temperature = 28.5;
    const int MAX_USERS = 100;
    printf("My age is: %d\n", age);
    printf("My final grade is: %c\n", grade);
    printf("Today's temperature is: %.1f\n", temperature);
    printf("The value of PI is: %.5f\n", PI);
    printf("The maximum number of users is: %d\n", MAX_USERS);
    return 0;
}
