#include <stdio.h>

int solution(int A, int B, int K)
{
  if (A == 0) {
    return B/K + 1;
  } else {
    return B/K - (A - 1)/K;
  }
}

int main(int argc, char const *argv[]) {
  printf("Disviable: %d\n", solution(100, 123000000, 2));
  return 0;
}
