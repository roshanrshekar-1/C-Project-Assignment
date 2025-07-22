#include <stdio.h>

void reverse() {
    int n, rev = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reverse of %d is %d\n", original, rev);
}

