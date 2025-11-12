#include <stdio.h>

long long factorial_iterative(int n) {
    if (n < 0) {
        return -1; // Factorial not defined for negative numbers
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void factorial() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long fact = factorial_iterative(num);

    if (fact == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, fact);
    }
   // return 0;
}
