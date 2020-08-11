#include <stdio.h>
#include <stdlib.h>
#include "node.h"


int main(int argc, char const * argv[]) {
    struct Node * head = node(100);
    printf("%d\n", head -> value);

    struct Node * tail = get(&head, 1);
    printf("%d\n", tail -> value);


    free(head);
    return 0;
}
