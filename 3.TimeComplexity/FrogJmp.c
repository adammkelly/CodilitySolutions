#include <stdio.h>

int solution(int X, int Y, int D) {

    if (X == Y) {
      return 0;
    } else {
      int i = ((Y - X) % D) ? (Y-X)/D+1 : (Y-X)/D;
      return i;
    }
}

int main(int argc, char const *argv[]) {
  printf("Frog jmp: %d", solution(1, 5, 2));
  return 0;
}
