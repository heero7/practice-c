#include <stdio.h>
#include "linked-list.h"

int main(void) {
  printf("Welcome to Linked List\n");
  LinkedList* my_ll = init_linked_list();
  print_linked_list(my_ll);

  push_back(my_ll, 'a');
  push_back(my_ll, 'b');
  print_linked_list(my_ll);

  //todo: tests for size()
  return 0;
}
