#include <stdio.h>
int main() {
    int intValue;
    float floatValue;
    printf("Enter an integer: ");
    scanf("%d", &intValue);
    printf("Enter a float: ");
    scanf("%f", &floatValue);
    printf("You entered the integer: %d\n", intValue);
    printf("You entered the float: %.2f\n", floatValue); 
}
