#include <stdio.h>
#include <stdlib.h>
#include "node.h"


int main(int argc, char const * argv[]) {
    int arr[] = {10, 15, 30, 45, 60};
    struct Node * llist = list(arr, 5);

    dump(&llist);
    kill(&llist);
    return 0;
}
