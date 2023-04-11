#include <stdio.h>

int isPrime(int num);

int main() {
    int start, end, count = 0;

    printf("Enter the range (start and end): ");
    scanf("%d%d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of prime numbers = %d", count);

    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
