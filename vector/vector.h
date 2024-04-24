/*
 * A structure that holds a dynamically
 * sized array. The vector will grow
 * and shrink in size when needed.
 * For now is just a vector of integers.
 * Follow up Questions:
 * 1) How can we allow a type that is specified at run time? (Like T)
 * 2) How can we allow an assortment of different types? (Like Python or JavaScript)
 * */
typedef struct Vector Vector;

// Gets the number of elements in the vector.
int size(Vector* v);

// Gets the maximum number of elements the vector
// can hold.
int capacity(Vector* v);


/*
 * Creates a new vector.
 */
Vector* alloc_vector();

/*
 * Adds a new item into the vector.
 * */
void push(Vector* v, int item);

/*
 * Prints the contents of a vector.
 * */
void print_elements(Vector* v);
