#include <assert.h>
#include <stdio.h>

int missingNumber(int *nums, int numsSize) {

  int sum = 0;
  for (int i = 0; i < (numsSize); i++) {
    sum += i - nums[i];
  }

  sum += numsSize;

  return sum;
}

int main() {

  int test[] = {9, 6, 4, 2, 3, 5, 7, 0, 1}; // answer should be 8
  int expected = 8;

  int answer = missingNumber(test, 9);

  printf("%d\n", answer);

  assert(answer == expected);
}
