#include <stdio.h>
#include <math.h>
int main() {
    double num;

    printf("Enter a number (positive or negative): ");
    scanf("% f", &num);

    printf("Floor value = % f\n", floor(num));
    printf("Ceil value = % f\n", ceil(num));

    return 0;
}