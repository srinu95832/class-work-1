#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // loop through each number from 1 to n and add it to sum
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of first %d natural numbers is %d", n, sum);

    return 0;
}
