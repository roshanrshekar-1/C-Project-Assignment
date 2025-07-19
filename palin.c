#include <stdio.h>
void palindrome() {
    char str[100], rev[100];
    int i, j, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
        if (str[i] != str[j])
            flag = 1;
    }

    rev[i] = '\0';

    if (flag == 0)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is Not a Palindrome\n", str);
}


