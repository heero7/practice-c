#include "vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define STARTING_CAPACITY 16


Vector* alloc_vector() {
  int* arr = malloc(sizeof(int) * STARTING_CAPACITY);
  assert(arr != NULL && "Trouble allocating memory for vector.");

  Vector* v; 
  v->array = arr;
  v->length = 0;
  v->capacity = STARTING_CAPACITY;

  return v;
}

void push(Vector* v, int item) {
  if (v->capacity == v->length) {
    printf("[Vector] The vector is full. Cannot add item to list\n");
    return;
  }
  v->array[v->length] = item;
  v->length++;
}

void print_elements(Vector *v) {
  for (int i = 0; i < v->capacity; i++) {
    printf("[%d] ", v->array[i]);
  }
  printf("\n");
}
