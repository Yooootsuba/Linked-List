#ifndef __NODE_H__
#define __NODE_H__


#include <stdbool.h>


struct Node {
    int value;
    struct Node * next;
};


// Allocate and get a new node instance
struct Node * node(int value);

// Initialize a linked list from an array
struct Node * list(int * arr, int size);

// Sort list
void sort(struct Node ** list, bool reverse);

// Get the size of list
int count(struct Node ** list);

// Dump the values in list
void dump(struct Node ** list);

// Get a node instance by index
struct Node * get(struct Node ** list, int index);

// Get the value of node by index
int key(struct Node ** list, int index);

// Get the value of head
int head(struct Node ** list);

// Get the value of tail
int tail(struct Node ** list);

// Add a node on the head
void front(struct Node ** list, int value);

// Add a node on the tail
void push(struct Node ** list, int value);

// Pop out the node on the tail
int pop(struct Node ** list);

// Insert a node between to list by index
void insert(struct Node ** list, int index, int value);

// Update the value of node by index
void update(struct Node ** list, int index, int value);

// Remove a node by index
void delete(struct Node ** list, int index);

// Kill list
void kill(struct Node ** list);


#endif
