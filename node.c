#include <assert.h>
#include <stdlib.h>
#include "node.h"


struct Node * node(int value) {
    struct Node * dummy = malloc(sizeof(struct Node));
    dummy -> value = value;
    dummy -> next = NULL;
    return dummy;
}


struct Node * get(struct Node ** head, int index) {
    struct Node * dummy = *head;

    for (size_t i = 0; i < index; i++) {
        assert(dummy -> next);
        dummy = dummy -> next;
    }

    return dummy;
}


int key(struct Node ** head, int index) {
    struct Node * dummy = get(head, index);
    return dummy -> value;
}


void insert(struct Node ** head, int index, int value) {
    struct Node * dummy  = get(head, index);
    struct Node * middle = node(value);
    struct Node * tail   = dummy -> next;

    dummy  -> next = middle;
    middle -> next = tail;
}


void kill(struct Node ** head) {
    struct Node * killer, * dummy  = *head;

    while (dummy != NULL) {
        killer = dummy;
        dummy = dummy -> next;
        free(killer);
    }
}
