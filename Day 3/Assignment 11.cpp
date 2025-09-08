#include <stdio.h>
int main() {
    int num, lastDigit1, lastDigit2;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit1 = num % 10;

    lastDigit2 = num - (num / 10) * 10;

    printf("Last digit using modulus: %d\n", lastDigit1);
    printf("Last digit without modulus: %d\n", lastDigit2);

    return 0;
}