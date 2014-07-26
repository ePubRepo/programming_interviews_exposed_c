#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "nodeelement.h"

NodeElement *findMthToLastNode(NodeElement *head, int n) {
    int i;
    NodeElement *currentElement = head;
    for (i = 0; i < n; i++) {
        printf("Begin to %d", n);
        if (currentElement == NULL) {
            return NULL;
        }
        currentElement = currentElement->next;
        printf("Done - Incremented to %d", n);
    }
    printf("Half way\n");
    NodeElement *nTrailingElement = head;
    while (true) {
        currentElement = currentElement->next;
        if (currentElement == NULL) {
            return nTrailingElement;
        }
        nTrailingElement = nTrailingElement->next;
    }
    return nTrailingElement;
}