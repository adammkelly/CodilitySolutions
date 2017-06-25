#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int A[SIZE] = {10, 2, 5, 1, 8, 20};

int compare(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N)
{

  qsort(A, N, sizeof (int), compare);

  for (int i = 0; i < N; i ++) {
    if (A[i] > 0 && A[i] > A[i + 2] - A[i + 1]) {
      return 1;
    }
  }


  return 0;
}

int main(int argc, char const *argv[]) {
  printf("Triangle: %d\n", solution(A, SIZE));
  return 0;
}
