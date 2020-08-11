#ifndef __NODE_H__
#define __NODE_H__


struct Node {
    int value;
    struct Node * next;
};


// Allocate and get a new node instance
struct Node * node(int value);

// Get a node instance by index
struct Node * get(struct Node ** dummy, int index);

// Get the value of node by index
int key(struct Node ** dummy, int index);

// Insert a node between to list by index
void insert(struct Node ** dummy, int index, int value);

// Update a node's value by index
void update(struct Node ** dummy, int index, int value);

// Remove a node by index
void delete(struct Node ** dummy, int index);

// Kill list
void kill(struct Node ** dummy);


/*
int push();
int pop();
int count();
*/


#endif
