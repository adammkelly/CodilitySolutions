#include <stdio.h>

#define SIZE 5

#define EAST 0
#define WEST 1

int A[SIZE] = {0, 1, 0, 1, 1};

int solution(int A[], int N) {
    // write your code in C99
    int passing = 0;
    int westCars = 0;
    int hasEast = 0;
    for (int i = N - 1; i >=0 ; i -- ) {
        if (A[i] == EAST) {
            hasEast ++;
            passing += westCars;
            if (passing > 1000000000) {
                return -1;
            }
        } else {
            westCars ++;
        }
    }

    return passing;
}

int main(int argc, char const *argv[]) {
  printf("Passing Cars: %d\n", solution(A, SIZE));
  return 0;
}
