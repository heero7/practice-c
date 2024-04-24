#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "vector.h"

int main() {
  printf("Hello, vector\n");

  Vector* my_vector = alloc_vector();

  print_elements(my_vector);

  int c = capacity(my_vector);
  int s = size(my_vector);

  assert(s == 0 && "Size should be 0");

  srand(time(NULL));

  for (int i = 0; i < c; i++) {
    push(my_vector, rand() % c); 
  }
  print_elements(my_vector);
  s = size(my_vector);
  assert(c == s && "Capacity and length should be equal");
  return 0;
}
