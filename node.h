#ifndef __NODE_H__
#define __NODE_H__


struct Node {
    int value;
    struct Node * next;
};


// Allocate and get a new node instance
struct Node * node(int value);

// Get a node instance by index
struct Node * get(struct Node ** head, int index);

// Get the value of node by index
int key(struct Node ** head, int index);

// Insert a node between to list by index
void insert(struct Node ** head, int index, int value);

// Kill list
void kill(struct Node ** head);

/*
int update();
int delete();
int push();
int pop();
int count();

*/


#endif
