#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, D, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("% f % f % f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Real and distinct roots: % f , % f\n", root1, root2);
    }
    else if (D == 0) {
        root1 = -b / (2 * a);
        printf("Real and equal roots: % f , % f\n", root1, root1);
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        printf("Complex roots: % f + % fi , % f - % fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}