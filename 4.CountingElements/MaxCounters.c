#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int A[SIZE] = {3, 4, 4, 6, 1, 4, 4};

struct Results {
  int * C;
  int L;
};

struct Results solution(int N, int A[], int M)
{
  struct Results result;

  int *B;
  B = (int *)calloc(N, sizeof(int));
  int max = 0;
  int lastIncrease = 0;
  for (int i = 0; i < M; i ++) {
      if(A[i] > 0 && A[i] < N + 1) {
          if (B[A[i] - 1] < lastIncrease) {
              B[A[i] - 1] = lastIncrease;
          }
          B[A[i] - 1] ++;
          if(max < B[A[i] - 1]) {
              max = B[A[i] - 1];
          }
      }
      if (A[i] == N + 1) {
          lastIncrease = max;
      }
  }

  for(int i = 0; i < N ; i ++) {
      if(B[i] < lastIncrease) {
          B[i] = lastIncrease;
      }
  }

  // write your code in C99
  result.C = B;
  result.L = N;
  return result;
}

int main(int argc, char const *argv[]) {
  struct Results s = solution(5, A, SIZE);
  return 0;
}
