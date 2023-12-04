#include <stdio.h>
int main() {
    int integer1, integer2;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    if (integer1>integer2) {
        printf("The maximum is %d\n", integer1);}
    if (integer2>integer1) {
        printf("The maximum is %d\n", integer2);}
    return 0;
}
