#include<stdio.h>
int main(){
    int length1, length2, length3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &length1, &length2, &length3);
    if(length1*length1+length2*length2 ==length3*length3 || length1*length1+length3*length3 ==length2*length2 || length2*length2+length3*length3 ==length1*length1){
        printf("Rectangular triangle.\n");
    }
    if(length1*length1+length2*length2 !=length3*length3 && length1*length1+length3*length3 !=length2*length2 && length2*length2+length3*length3 !=length1*length1){
        printf("Not isosceles triangle.\n");
    }
    return 0;
}
