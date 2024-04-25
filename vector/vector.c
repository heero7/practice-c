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

void resize_lengthen(Vector* v);

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

int is_empty(Vector* v) {
  return v->length == 0 ? 0 : 1;
}

void push(Vector* v, int item) {
  if (v->capacity == v->length) {
    resize_lengthen(v);
  }
  v->array[v->length] = item;
  v->length++;
}

int at(Vector* v, int index) {
  if (index < 0 || index > v->capacity - 1) {
    printf("[Vector] ERROR: INDEX OUT OF BOUNDS.\n");
    return -1;
  }
  return v->array[index];
}

void print_elements(Vector *v) {
  for (int i = 0; i < v->capacity; i++) {
    printf("[%d] ", v->array[i]);
  }
  printf("\n");
}

void foo(Vector* v) {
  resize_lengthen(v);
}

/**
  * Doubles the size of the array.
  */
void resize_lengthen(Vector* v) {
  int* pArr = malloc(sizeof(int) * v->capacity * 2);
  if (pArr == NULL) {
    printf("[Vector] could not allocate memory for a new array\n");
    exit(1);
  }

  for (int i = 0; i < v->length; i++) {
    pArr[i] = v->array[i];
  }

  free(v->array);

  v->array = pArr;
  v->capacity = v->capacity *= 2;
}

void resize_shorten(Vector* v) {
}
