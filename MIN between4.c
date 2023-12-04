#include <stdio.h>
int main() {
    int a, b, c, d, min;
    printf("Please enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
        min = a;
    if (min>b) {
        min=b;
    }
    if (min>c) {
        min=c;
    }
    if (min>d) {
        min=d;
    }
        printf("The minimum is %d.\n", min);
    return 0;
}
