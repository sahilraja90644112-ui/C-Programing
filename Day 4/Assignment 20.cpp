#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
        printf("Whole number\n");
    else
        printf("Not a whole number\n");

    return 0;
}