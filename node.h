#ifndef __NODE_H__
#define __NODE_H__


struct Node {
    int value;
    struct Node * next;
};


// Allocate and get a new node instance
struct Node * node(int value);

// Initialize a linked list from an array
struct Node * list(int * arr, int size);

// Dump the values in list
void dump(struct Node ** dummy);

// Get a node instance by index
struct Node * get(struct Node ** dummy, int index);

// Get the value of node by index
int key(struct Node ** dummy, int index);

// Get the value of head
int head(struct Node ** dummy);

// Get the value of tail
int tail(struct Node ** dummy);

// Get the size of list
int count(struct Node ** dummy);

// Add a node on the head 
void front(struct Node ** dummy, int value);

// Add a node on the tail
void push(struct Node ** dummy, int value);

// Pop out the node on the tail
int pop(struct Node ** dummy);

// Insert a node between to list by index
void insert(struct Node ** dummy, int index, int value);

// Update the value of node by index
void update(struct Node ** dummy, int index, int value);

// Remove a node by index
void delete(struct Node ** dummy, int index);

// Kill list
void kill(struct Node ** dummy);


#endif
