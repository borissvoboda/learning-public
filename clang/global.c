#include <stdio.h>

int magic(int x) {
  return x*22;
}

int main() {
  int m = magic(2);
  printf("%d", m);
  return 0;
}

