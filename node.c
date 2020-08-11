#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "node.h"


struct Node * node(int value) {
    struct Node * node = malloc(sizeof(struct Node));
    assert(node);

    node -> value = value;
    node -> next = NULL;    
    return node;
}


struct Node * list(int * arr, int size) {
    struct Node * list = node(arr[0]);
    struct Node * head = list;

    for (size_t i = 1; i < size; i++) {
        list -> next = node(arr[i]);
        list = list -> next;
    }

    return head;
}


void dump(struct Node ** dummy) {
    int count = 0;
    struct Node * head = *dummy;

    printf("{\n");

    while (head != NULL) {
        count++;
        printf("    [%d] => %d\n", count, head -> value);
        head = head -> next;
    }

    printf("}\n");
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


int head(struct Node ** dummy) {
    return (*dummy) -> value;
}


int tail(struct Node ** dummy) {
    struct Node * head = *dummy;

    while (head -> next != NULL) {
        head = head -> next;
    }

    return head -> value;
}


int count(struct Node ** dummy) {
    int count = 1;
    struct Node * head = *dummy;

    while (head -> next != NULL) {
        count++;
        head = head -> next;
    }

    return count;
}


void push(struct Node ** dummy, int value) {
    struct Node * head = *dummy;

    while (head -> next != NULL) {
        head = head -> next;
    }

    head -> next = node(value);
}


int pop(struct Node ** dummy) {
    struct Node * head = *dummy;

    while (head -> next != NULL) {
        head = head -> next;
    }

    int value = head -> value;
    free(head);
    return value;
}


void insert(struct Node ** dummy, int index, int value) {
    struct Node * head   = get(dummy, index);
    struct Node * middle = node(value);
    struct Node * tail   = head -> next;

    head   -> next = middle;
    middle -> next = tail;
}


void update(struct Node ** dummy, int index, int value) {
    struct Node * head = get(dummy, index);
    head -> value = value;
}


void delete(struct Node ** dummy, int index) {
    struct Node * head   = get(dummy, index - 1);
    struct Node * middle = head -> next;
    struct Node * tail   = middle -> next;

    free(middle);
    head -> next = tail;
}


void kill(struct Node ** dummy) {
    struct Node * killer, * head  = *dummy;

    while (head != NULL) {
        killer = head;
        head = head -> next;
        free(killer);
    }
}
