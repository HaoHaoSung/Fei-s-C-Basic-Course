#include<stdio.h>
int main(){
    int a, b, c, t;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b) {
        t=a;
        a=b;
        b=t;
    }
    if (c < a) {
        t=a;
        a=c;
        c=t;
    }
    if (c < b) {
        t=b;
        b=c;
        c=t;
    }
    if(a == c){
        printf("Regular triangle.\n");
    }
    if(a != b || b != c){
        if(a == b || b == c){

            printf("Isosceles triangle.\n");
    }}
    if(a * a+ b * b == c * c){
        printf("Rectangular triangle.\n");
    }
    return 0;
}
