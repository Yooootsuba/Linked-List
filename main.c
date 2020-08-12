#include <stdio.h>
#include <stdlib.h>
#include "node.h"


int main(int argc, char const * argv[]) {
    // Initialize a linked list
    int arr[] = {15, 20, 30};
    struct Node * llist = list(arr, sizeof(arr) / sizeof(int));

    // Test head, tail and dump functions
    printf("Initialize a linked list, the first element is %d, and the last element is %d \n", head(&llist), tail(&llist));
    dump(&llist);

    // Test front and push functions
    printf("Add 40 to head, insert 25 between to 15 and 20, and push 10 back \n");
    front(&llist, 40);
    insert(&llist, 1, 25);
    push(&llist, 10);
    dump(&llist);

    // Sort
    printf("Sort list \n");
    sort(&llist, false);
    dump(&llist);

    // Free memory
    printf("Free memory and exit program \n");
    kill(&llist);
    return 0;
}
