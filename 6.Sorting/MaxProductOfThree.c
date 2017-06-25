#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
// int A[SIZE] = {-3, 1, 2, -2, 5, 6};

int A[SIZE] = {-5, 5, -5, 4};

int compare(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N)
{
  int res = 0;

  qsort(A, N, sizeof (int), compare);

  res = A[N - 3] * A[N - 2] * A[N - 1];
  if ((A[0] * A[1]) > 0 && A[0] < 0) {
    int altRes = A[0] * A[1] * A[N - 1];
    if (altRes > res) {
      return altRes;
    }
  }


  return res;
}

int main(int argc, char const *argv[]) {
  printf("Max: %d\n", solution(A, SIZE));
  return 0;
}
