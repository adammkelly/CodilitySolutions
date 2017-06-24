#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int A[SIZE] = {1, 3, 6, 4, 1, 2};

int solution(int A[], int N) {

  int *B;
  B = (int *)calloc(N, sizeof(int));
  for (int i = 0; i < N; i++) {
    if (A[i] > 0) {
      if (B[A[i] - 1] == 0) {
        B[A[i] - 1] = 1;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    if (B[i] == 0) {
      free(B);
      return i + 1;
    }
  }

  return -1;
}

int main(int argc, char const *argv[]) {
  printf("Missing Int: %d\n", solution(A, SIZE));
  return 0;
}
