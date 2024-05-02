#include "linked-list.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList* init_linked_list() {
  LinkedList* n = malloc(sizeof(LinkedList));
  if (n == NULL) {
    return NULL;
  }
  
  n->head = NULL;
  return n;
}

void push_back(LinkedList *l, char v) {
  LinkedNode* ln = malloc(sizeof(LinkedNode));
  if (ln == NULL) {
    printf("[LinkedList] Could not add new node\n");
  }

  ln->letter = v;
  ln->next = NULL;


  LinkedNode* current = l->head;
  if (current == NULL) {
    l->head = ln;
    l->size++;
    return;
  }

  while (current->next != NULL) {
    current = current->next;
  }

  current->next = ln;
  l->size++;
}

void print_linked_list(LinkedList* l) {
  int printCount = 0;
  LinkedNode* c = l->head;

  // todo: How do I know if I HAVEN'T printed anything.
  while (c != NULL) {
    printf("[%c] => ", c->letter);
    c = c->next;
    printCount++;
  }

  if (printCount == 0) {
    printf("Linked list is empty!\n");
    return;
  }

  printf("\n");
}
