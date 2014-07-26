#include <stdio.h>
#include <stdbool.h>
#include "nodeelement.h"

bool isCyclicList(NodeElement *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }
    
    NodeElement *slowPointer = head;
    NodeElement *fastPointer = head;
    
    while (true) {
        // Move both pointers up by one.
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next;
        if (fastPointer == NULL) {
            return false;
        }
        // Move fast pointer ahead of slow pointer by one.
        fastPointer = fastPointer->next;
        if (fastPointer == slowPointer) {
            return true;
        }
    }
}