#include <stdio.h>
#include <string.h> 

int main() {
  
  struct Animal {
    int age;
    char name[30];
  };

  struct Animal dog1;
  dog1.age = 13;
  strcpy(dog1.name, "Brum");


  printf("%d, %s", dog1.age, dog1.name);
  return 0;
}

