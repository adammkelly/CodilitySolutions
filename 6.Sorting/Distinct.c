#include <stdio.h>

#define SIZE 6
int A[SIZE] = {2, 1, 1, 2, 3, 1};

// TODO: REDO, 33% Correct, 0 Perf WIP

int solution(int A[], int N)
{
  int curr = 0;
  int *B;

  B = (int *)calloc(N, sizeof (int));

  for (int i = 0; i < N; i++) {
    curr = A[i] < 0 ? abs(A[i]) : A[i];
    if (A[i] < 0 && !(B[curr - 1] & 0x1)) {
        B[curr - 1] |= 0x1;
    } else if (A[i] > 0 && !(B[curr - 1] & 0x2)) {
        B[curr - 1] |= 0x2;
    }
  }

  curr = 0;
  for (int i = 0; i < N; i++) {
      if ((B[i] & 0x3) == 0x3) {
        curr += 2;
      } else if ((B[i] & 0x1) == 0x1) {
        curr++;
      } else if ((B[i] & 0x2) == 0x2) {
        curr++;
      }
      B[i] = 0;
  }

  return curr;
}
