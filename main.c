#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "nodeelement.h"

bool isCyclicList(NodeElement*);
int main1579(int argc, char **argv) {
    NodeElement *node1 = (NodeElement *) malloc(sizeof(NodeElement));
    node1->value = 1;
    
    NodeElement *node2 = (NodeElement *) malloc(sizeof(NodeElement));
    node2->value = 2;
    
    NodeElement *node3 = (NodeElement *) malloc(sizeof(NodeElement));
    node3->value = 3;
    
    NodeElement *node4 = (NodeElement *) malloc(sizeof(NodeElement));
    node4->value = 4;
    
    NodeElement *node5 = (NodeElement *) malloc(sizeof(NodeElement));
    node5->value = 5;
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2;
    
    bool isCyclic = isCyclicList(node1);
    printf("%d\n", isCyclic);
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
    
    return 0;
}

NodeElement* findMthToLastNode(NodeElement*, int);
int main1332(int argc, char **argv) {
    NodeElement *node1 = (NodeElement *) malloc(sizeof(NodeElement));
    node1->value = 1;
    
    NodeElement *node2 = (NodeElement *) malloc(sizeof(NodeElement));
    node2->value = 2;
    
    NodeElement *node3 = (NodeElement *) malloc(sizeof(NodeElement));
    node3->value = 3;
    
    NodeElement *node4 = (NodeElement *) malloc(sizeof(NodeElement));
    node4->value = 4;
    
    NodeElement *node5 = (NodeElement *) malloc(sizeof(NodeElement));
    node5->value = 5;
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    NodeElement* nTh = findMthToLastNode(node1, 0);
    if (nTh == NULL) {
        printf("NULL response\n");
    } else {
        printf("%d\n", nTh->value);
    }
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
    return 0;
}

char findFirstNonRepeatedChar(char*, int len);
int main2457(int argc, char **argv) {
    char repeated = findFirstNonRepeatedChar("tazotal", 5);
    printf("First non-repeat char: %c\n", repeated);
    return 0;
}

int convertStringToSignedInteger(char *myString, int strLen);
int main2770(int argc, char **argv) {
    printf("Converted %d\n", convertStringToSignedInteger("10", 2));
    printf("Converted %d\n", convertStringToSignedInteger("0", 1));
    printf("Converted %d\n", convertStringToSignedInteger("1302", 4));
    return 0;
}

int main(int argc, char **argv) {
    main1332(argc, argv);
    main1579(argc, argv);
    main2457(argc, argv);
    main2770(argc, argv);
    return 0;
}
