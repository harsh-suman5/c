#include <stdio.h>

int main() {
    int n;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Case 1: Handle numbers less than or equal to 1
    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
    }
    // Case 2: Special case for number 2 (smallest prime number)
    else if (n == 2) {
        printf("%d is a prime number.\n", n);
    }
    // Case 3: Check divisibility by 2 (even numbers greater than 2 are composite)
    else if (n % 2 == 0) {
        printf("%d is a composite number.\n", n);
    }
    // Case 4: Special case for number 3 (prime)
    else if (n == 3) {
        printf("%d is a prime number.\n", n);
    }
    // Case 5: Check divisibility by 3
    else if (n % 3 == 0) {
        printf("%d is a composite number.\n", n);
    }
    // Case 6: Check divisibility by 5 (excluding 5 itself)
    else if (n % 5 == 0 && n != 5) {
        printf("%d is a composite number.\n", n);
    }
    // Case 7: Check divisibility by 7 (excluding 7 itself)
    else if (n % 7 == 0 && n != 7) {
        printf("%d is a composite number.\n", n);
    }
    // Case 8: If none of the above conditions match, it's a prime number
    else {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}

