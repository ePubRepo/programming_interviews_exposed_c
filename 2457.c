#include <stdio.h>

char findFirstNonRepeatedChar(char *word, int len) {
    int timesCharSeen[256];
    int i;
    for (i = 0; i < 256; i++) {
        timesCharSeen[i] = 0;
    }
    
    i = 0;
    for(i = 0; i < len; i++) {
        timesCharSeen[word[i]]++;
    }
    
    i = 0;
    for(i = 0; i < len; i++) {
        if (timesCharSeen[word[i]] == 1) {
            return word[i];
        }
    }
    return NULL;
}