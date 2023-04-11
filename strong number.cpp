#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int isStrong(int n) {
    int sum = 0;
    int digit;
    int temp = n;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    
    if (n == sum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isStrong(n)) {
        printf("%d is a strong number.", n);
    } else {
        printf("%d is not a strong number.", n);
    }
    
    return 0;
}
