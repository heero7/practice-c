/*
 * A LinkedNode that holds a character
 * and a pointer to the next value.
 * */
typedef struct LinkedNode {
  char letter;
  struct LinkedNode* next;
} LinkedNode;

/*
 * A linked list of char 
 * items.
 * */
// todo: Hide these members for practice
typedef struct LinkedList {
  struct LinkedNode* head;
  int size;
} LinkedList;


LinkedList* init_linked_list();

/*
 * Adds a value (char) to the end
 * of the linked list.
 */
void push_back(LinkedList* l, char v);

/**
 * Gets the size of the Linked List.
 */
int size(LinkedList* l);

/*
 * Prints the elements of a linked list.
 * */
void print_linked_list(LinkedList* l);
