#include <stdio.h>

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    result.A = A;
    result.N = N;

    if (N == 0) {
        return result;
    }

    int *temp = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
      int pos = (i + K) % N;
      temp[pos] = A[i];
    }

    result.A = temp;

    return result;
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
