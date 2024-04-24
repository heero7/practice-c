#include "vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define STARTING_CAPACITY 16

typedef struct Vector {
  // The pointer to the first block of memory of this array.
  int *array;

  // The number of elements in the array.
  int length;

  // The maximum number of elements in the array.
  int capacity;
} Vector;


Vector* alloc_vector() {
  int* arr = malloc(sizeof(int) * STARTING_CAPACITY);
  assert(arr != NULL && "Trouble allocating memory for vector.");

  Vector* v = malloc(sizeof(Vector));
  v->capacity = STARTING_CAPACITY;
  v->length = 0;
  v->array = arr;

  return v;
}

int size(Vector* v) {
  return v->length;
}

int capacity(Vector *v) {
  return v->capacity;
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
