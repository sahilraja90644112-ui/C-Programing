#include <stdio.h>

int main() {
    float f, c;
    int choice;
    printf("1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Celsius = % f\n", c);
    } else if(choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Fahrenheit = % f\n", f);
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}