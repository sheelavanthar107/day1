#include <stdio.h>
int main() {
int a, b;
printf("Enter two integers:\n");
scanf("%d %d", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("After swapping:\n");
printf("a = %d\n", a);
printf("b = %d\n", b);
}
