#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
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


void sort(struct Node ** list, bool reverse) {

}


int count(struct Node ** list) {
    int count = 1;
    struct Node * head = *list;

    while (head -> next != NULL) {
        count++;
        head = head -> next;
    }

    return count;
}


void dump(struct Node ** list) {
    int count = 0;
    struct Node * head = *list;

    printf("{\n");

    while (head != NULL) {
        count++;
        printf("    [%d] => %d\n", count, head -> value);
        head = head -> next;
    }

    printf("}\n");
}


struct Node * get(struct Node ** list, int index) {
    struct Node * head = *list;

    for (size_t i = 0; i < index; i++) {
        assert(head -> next);
        head = head -> next;
    }

    return head;
}


int key(struct Node ** list, int index) {
    struct Node * head = get(list, index);
    return head -> value;
}


int head(struct Node ** list) {
    return (*list) -> value;
}


int tail(struct Node ** list) {
    struct Node * head = *list;

    while (head -> next != NULL) {
        head = head -> next;
    }

    return head -> value;
}


void front(struct Node ** list, int value) {
    struct Node * middle = *list;
    struct Node * head   = node(value);
    struct Node * tail   = middle -> next;

    head   -> next = middle;
    middle -> next = tail;
}


void push(struct Node ** list, int value) {
    struct Node * head = *list;

    while (head -> next != NULL) {
        head = head -> next;
    }

    head -> next = node(value);
}


int pop(struct Node ** list) {
    struct Node * head = *list;

    while (head -> next != NULL) {
        head = head -> next;
    }

    int value = head -> value;
    free(head);
    return value;
}


void insert(struct Node ** list, int index, int value) {
    struct Node * head   = get(list, index);
    struct Node * middle = node(value);
    struct Node * tail   = head -> next;

    head   -> next = middle;
    middle -> next = tail;
}


void update(struct Node ** list, int index, int value) {
    struct Node * head = get(list, index);
    head -> value = value;
}


void delete(struct Node ** list, int index) {
    struct Node * killer = get(list, index);

    for (size_t i = 0; i < index; i++) {
        list = &((*list) -> next);
    }

    *list = killer -> next;
    free(killer);
}


void kill(struct Node ** list) {
    while (*list != NULL) {
        delete(list, 0);
    }
}
