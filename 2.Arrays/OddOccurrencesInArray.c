#include <stdio.h>

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#define SIZE 7

int A[SIZE] = {9, 3, 9, 3, 9, 7, 9};

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int value = 0;

    for (int i = 0; i < N; i++) {
      value ^= A[i];
    }

    return value;
}

int main(int argc, char const *argv[]) {
  printf("Odd one out: %d\n", solution(A, SIZE));
  return 0;
}
