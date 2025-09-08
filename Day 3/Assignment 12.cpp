#include <stdio.h>
#include <math.h>
int main() {
    float P, R, T, CI, Amount;

    printf("Enter Principal: ");
    scanf("% f", &P);
    
    printf("Enter Rate of Interest: ");
    scanf("% f", &R);
    
    printf("Enter Time (in years): ");
    scanf("% f", &T);

    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    printf("Compound Interest = % f\n", CI);
    printf("Total Amount = % f\n", Amount);

    return 0;
}