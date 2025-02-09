#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if it's a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Check if it's an uppercase or lowercase vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if it's an uppercase or lowercase letter (consonant)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // If it's none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
