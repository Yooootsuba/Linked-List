#include <assert.h>
#include <stdlib.h>
#include "node.h"


struct Node * node(int value) {
    struct Node * node = malloc(sizeof(struct Node));
    node -> value = value;
    node -> next = NULL;
    return node;
}


struct Node * get(struct Node ** dummy, int index) {
    struct Node * head = *dummy;

    for (size_t i = 0; i < index; i++) {
        assert(head -> next);
        head = head -> next;
    }

    return head;
}


int key(struct Node ** dummy, int index) {
    struct Node * head = get(dummy, index);
    return head -> value;
}


void insert(struct Node ** dummy, int index, int value) {
    struct Node * head   = get(dummy, index);
    struct Node * middle = node(value);
    struct Node * tail   = head -> next;

    head  -> next = middle;
    middle -> next = tail;
}


void kill(struct Node ** dummy) {
    struct Node * killer, * head  = *dummy;

    while (head != NULL) {
        killer = head;
        head = head -> next;
        free(killer);
    }
}
