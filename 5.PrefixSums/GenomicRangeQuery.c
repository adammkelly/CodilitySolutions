#include <stdio.h>
#include <stdlib.h>

// TODO: FINISH THIS WIP

#define QUERIES 3
#define N 7

char *S = "CAGCCTA";
int P[QUERIES] = {2, 5, 0};
int Q[QUERIES] = {4, 5, 6};



struct Results {
  int * A;
  int M;
};

int impact(char *s) {

  printf("IMPACT %s\n", s);
  if (s == "A") {
    return 1;
  } else if (s == "C") {
    return 2;
  } else if (s == "G") {
    return 3;
  } else if (s == "T") {
    return 4;
  }

  return -1;
}

struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)

    int *cpy;
    cpy = (int *)calloc(M, sizeof(int));
    char elm = (char)*S[0];

    printf("value %d %s\n", impact(elm), elm);




    // result.A = ...
    // result.M = ...
    return result;
}

int main(int argc, char const *argv[]) {
  printf("GRQ\n");
  struct Results r = solution(S, P, Q, QUERIES);
  return 0;
}
