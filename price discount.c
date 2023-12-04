#include<stdio.h>
int main() {
    int people, price;
    printf("Please enter the number of customers: ");
    scanf("%d", &people);
    if(people >= 10) {
        price = people * 300. * 0.8;
    }
    if(people < 10) {
        price = people * 300;
    }
    printf("Total: %d\n.", price);
    return 0;
}
