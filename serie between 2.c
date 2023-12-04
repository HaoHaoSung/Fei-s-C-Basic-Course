#include<stdio.h>
int main() {
    int a, b, old_a;
    printf("Please enter two integers: ");
    scanf("%d%d", &a, &b);
    if(a>b) {
        old_a = a;
        a = b;
        b = old_a;
    }
    printf("%d, %d. \n", a, b);
    return 0;
}
