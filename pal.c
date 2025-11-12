#include <stdio.h>

void palindrome() {
    int n, rev = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (temp == rev)
        printf("%d is a palindrome.\n", temp);
    else
        printf("%d is not a palindrome.\n", temp);
}


