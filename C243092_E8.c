//  number E8 answer

#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("Sum = %d\n", sum);

    return 0;
}