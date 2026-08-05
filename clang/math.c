#include <stdio.h>
#include <math.h>

const float PI = 3.14159;


int main() {
  float radius = 100;
  float area = PI * pow(radius,2);
  printf("%f\n", radius);
  printf("%f\n\n", PI);

  printf("%f\n", area);

  char input;
  scanf("%d", &input);
  return 0;
}

// ****************************************
// math.h
// pow(x,y) - value of x to the power of y
// ceil(1.4)
// floor(1.4)
