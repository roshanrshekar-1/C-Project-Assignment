#include <stdio.h>

void biggest() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is bigger\n", a);
    else if (b > a)
        printf("%d is bigger\n", b);
    else
        printf("Both numbers are equal\n");
}

