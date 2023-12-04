#include <stdio.h>

int main() {
    char input, output;
    printf("Please enter a capital letter.");
    scanf("%c", &input);
    output = input + 32;
    printf("%c\n", output);
    return 0;
}
