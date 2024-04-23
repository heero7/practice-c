/*
 * A structure that holds a dynamically
 * sized array. The vector will grow
 * and shrink in size when needed.
 * */
typedef struct Vector Vector;

// Gets the number of elements in the vector.
int size();

// Gets the maximum number of elements the vector
// can hold.
int capacity();

Vector* alloc_vector();

/*
 * Prints the contents of a vector.
 * */
void print_elements(Vector* v);
