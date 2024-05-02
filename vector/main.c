#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "vector.h"

int main(void) {
  printf("Hello, vector\n");

  Vector* my_vector = alloc_vector();
  int empty = is_empty(my_vector);

  assert(empty == 0 && "Array should be empty after allocating");

  print_elements(my_vector);

  int c = capacity(my_vector);
  int s = size(my_vector);

  assert(s == 0 && "Size should be 0");

  srand(time(NULL));

  int expected_value_1 = 24;
  push(my_vector, expected_value_1);

  for (int i = 1; i < 8; i++) {
    push(my_vector, rand() % c); 
  }

  empty = is_empty(my_vector);
  assert(empty == 1 && "Array should not be empty after pushing");
  print_elements(my_vector);
  s = size(my_vector);
  assert(s == 8 && "Size should be 8");


  int res1 = at(my_vector, 0);
  assert(res1 == expected_value_1 && "Expected values to match");

  int expected_value_2 = 722;
  push(my_vector, expected_value_2);

  int res2 = at(my_vector, size(my_vector) - 1);
  assert(res2 == expected_value_2 && "Expected values to match");

  int bad = at(my_vector, -1000);
  assert(bad == -1 && "Expected out of bounds error");
  bad = at(my_vector, -1000);
  assert(bad == -1 && "Expected out of bounds error");

  c = capacity(my_vector);
  s = size(my_vector);

  for (int i = s; i < c; i++) {
    push(my_vector, rand() % c); 
  }

  c = capacity(my_vector);
  s = size(my_vector);
  assert(c == s && "Capacity and size should be the same");

  push(my_vector, 1111);
  int new_capacity_dbl = capacity(my_vector);

  assert(new_capacity_dbl == c * 2 && "Capacity should be doubled");
  return 0;
}
