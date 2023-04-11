#include <stdio.h>

int main() {
  int count = 0, num;

  printf("Enter the number of integers: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    if (i % 5 == 0) {
      count++;
    }
  }

  printf("The number of integers divisible by 5 between 1 and %d is %d.\n", num, count);

  return 0;
}
