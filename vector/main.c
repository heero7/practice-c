#include <stdio.h>
#include "vector.h"

int main() {
  printf("Hello, vector\n");

  Vector* my_vector = alloc_vector();
  print_elements(my_vector);
  return 0;
}
