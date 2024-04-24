#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "vector.h"

int main() {
  printf("Hello, vector\n");

  // Todo. Use asserts here. we're debugging!
  Vector* my_vector = alloc_vector();
  print_elements(my_vector);

  assert(my_vector->length == 0 && "Size should be 0");

  srand(time(NULL));

  for (int i = 0; i < my_vector->capacity; i++) {
    push(my_vector, rand() % my_vector->capacity);
  }
  print_elements(my_vector);
  assert(my_vector->capacity == my_vector->length && "Capacity and length should be equal");
  return 0;
}
