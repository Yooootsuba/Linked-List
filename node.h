#ifndef __NODE_H__
#define __NODE_H__


struct Node {
    int value;
    struct Node * next;
};


struct Node * node(int value);
struct Node * get(struct Node ** head, int index);


/*
int insert();
int update();
int delete();
int push();
int pop();
int count();

*/


#endif
