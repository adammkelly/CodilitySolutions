#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int A[SIZE] = {1, 3, 1, 4, 2, 3, 5, 4};

int solution(int X, int A[], int N)
{
  int pos = 0;
  int *B;

  if (N == 1) {
    if (A[0] == X) {
      return 0;
    } else {
      return -1;
    }
  }

  B = (int *)calloc(X, sizeof(int));

  for (int i = 0; i < N; i++) {
    if (B[A[i] - 1] == 0) {
      pos++;
      B[A[i] - 1] = 1;
    }

    if (i >= X - 1) {
      if (pos == X) {
        return i;
      }
    }
  }

  free(B);
  return -1;
}


int main(int argc, char const *argv[]) {
  printf("FrogRiverOne: %d seconds\n", solution(5, A, SIZE));
  return 0;
}
