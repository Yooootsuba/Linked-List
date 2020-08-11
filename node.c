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
