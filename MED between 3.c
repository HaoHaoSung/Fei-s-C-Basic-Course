#include<stdio.h>
int main() {
    int a, b, c, med;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    med = a;
    if((b<a && b>c)||(b>c && a>b)) {
    med=b;
    }
    if((c<a && c>b)||(c>a && b>c)){
    med=c;
    }
    printf("The median is %d. \n", med);
    return 0;
}
