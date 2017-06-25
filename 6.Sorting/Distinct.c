#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
int A[SIZE] = {-1, -2, -1, 2, 3, 1};

// TODO: REDO, 33% Correct, 0 Perf WIP

int compare(const void *a, const void *b)
{
  return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N)
{
  int curr = 0;
  int distinct = 0;
  int last;

  if (N == 1) {
    return 1;
  }

  qsort(A, N, sizeof(int), compare);

  for (int i = 0; i < N; i++) {
    curr = A[i];
    if (curr != last) {
      distinct++;
    }
    last = curr;
  }


  return distinct;
}

int main(int argc, char const *argv[]) {
  printf("Distinct: %d", solution(A, SIZE));
  return 0;
}
