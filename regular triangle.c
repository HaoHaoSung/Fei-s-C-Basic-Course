#include<stdio.h>
int main(){
    int length1, length2, length3;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &length1, &length2, &length3);
    if(length1 ==length2 && length2==length3){
        printf("Regular triangle.\n");
    }
    if(length1 != length2 || length2 != length3 || length1 != length3){
        printf("Not regular triangle.\n");
    }
    return 0;
}
