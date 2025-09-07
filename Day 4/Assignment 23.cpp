#include <stdio.h>
int main() {
    char ch;
    printf("Enter a letter: ");
    scanf(" %c", &ch);

    if (ch=='a' || ch=='A')
        printf("Vowel\n");
        
    else if (ch=='e' || ch=='E')
        printf("Vowel\n");
        
    else if (ch=='i' || ch=='I')
        printf("Vowel\n");
        
    else if (ch=='o' || ch=='O')
        printf("Vowel\n");
        
    else if (ch=='u' || ch=='U')
        printf("Vowel\n");
        
    else
        printf("Consonant\n");

    return 0;
}