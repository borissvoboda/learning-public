// FILE *fptr;

// // Create a file
// fptr = fopen("filename.txt", "w");

// // Close the file
// fclose(fptr);

#include <stdio.h>

int main(void) {

  for (int i = 0; i < 10; i++) {
    FILE *fptr; 
    char filename[64];
    snprintf(filename, sizeof(filename), "filename%d.txt", i);

    fptr = fopen(filename, "w");

    if (fptr) {
        fprintf(fptr, "Hello from %s\n", filename);
        fclose(fptr);
    }

  }


  return 0;
}