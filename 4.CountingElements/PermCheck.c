#include <stdio.h>

#define SIZE 3

int A[SIZE] = {1, 3, 2};

int solution(int A[], int N) {
    // write your code in C99
    int *B;
    B = (int *)calloc(N, sizeof(int));
    for(int i = 0; i < N ; i ++) {
        if(A[i] > N) {
            return 0;
        }
        B[A[i] - 1] ++;
    }
    for(int i = 0; i < N ; i ++) {
        if(B[i] > 1) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[]) {
  printf("PermCheck: %d\n", solution(A, SIZE));
  return 0;
}
