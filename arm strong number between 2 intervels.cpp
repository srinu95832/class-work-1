#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, digit, sum;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for(num = low; num <= high; num++) {
        int temp = num;
        sum = 0;

        while(temp != 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if(num == sum) {
            printf("%d ", num);
        }
    }

    return 0;
}
