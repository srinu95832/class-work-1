#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0;
    int digit;
    int temp = n;
    int nDigits = floor(log10(abs(n))) + 1;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, nDigits);
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
    
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.", n);
    } else {
        printf("%d is not an Armstrong number.", n);
    }
    
    return 0;
}
