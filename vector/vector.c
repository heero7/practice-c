#include "vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define STARTING_CAPACITY 16

/*
 * For now is just a vector of integers.
 * Follow up Questions:
 * 1) How can we allow a type that is specified at run time? (Like T)
 * 2) How can we allow an assortment of different types? (Like Python or JavaScript)
 * */
struct Vector {
  // The pointer to the first block of memory of this array.
  int *array;

  // The number of elements in the array.
  int length;

  // The maximum number of elements in the array.
  int capacity;
};

Vector* alloc_vector() {
  int* arr = malloc(sizeof(int) * STARTING_CAPACITY);
  assert(arr != NULL && "Trouble allocating memory for vector.");

  Vector* v; 
  v->array = arr;
  v->length = 0;
  v->capacity = STARTING_CAPACITY;

  return v;
}

void print_elements(Vector *v) {
  for (int i = 0; i < v->capacity; i++) {
    printf("[%d] ", v->array[i]);
  }
  printf("\n");
}
