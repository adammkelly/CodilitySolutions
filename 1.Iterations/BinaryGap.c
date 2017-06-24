#include <stdio.h>
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    /*
     * Ensures it only starts checking the gap
     * when the first 1 is seen. After that it
     * checks the number of 0's between the 1's
     * and saves the highest value in "max".
     */
    int max = 0;
    int found = 0;
    int current = 0;
    int value = N;

    while(value != 0) {
      if (value & 0x1) {
        if (max < current) {
            max = current;
        }
        current = 0;
        found = 1;
      } else {
        if (found) {
          current++;
        }
      }
      value = value >> 1;
    }

    return max;
}


int
main(int argc, char const *argv[]) {
  printf("Total: %d\n", solution(1041));
  return 0;
}
