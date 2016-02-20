#include "ngram-rm.h"
#include <stdlib.h>
#include <string.h>


int main(){
    return 0;
}

/* This step will make the subsequent deletion significantly faster
   especially when using the same set of ngrams on many strings 
   NOTE: The ngrams must be null-terminated */
void preprocess(node *root, char **ngrams){
    node *currnode = root;
    char *ngram = ngrams[0];
    char *currchar = ngram;

    while(1){

        // Continue the branch
        if(currnode->child_cnt == 0){
            node *newchild = (node *)malloc(sizeof(node));
            newchild->depth = currnode->depth + 1;

            char *childval = (char *)malloc(newchild->depth);
            memcpy(childval, currnode->value, currnode->depth);

            childval[currnode->depth] = *currchar;
            
            currnode->child_cnt++;
            currnode->children = (node **)malloc(sizeof(node *));
            currnode->children[0] = newchild;
        } else {
            //TODO: create new branch
        }

        currchar += sizeof(char);
        // Move to next ngram
        if(*currchar == 0){
            ngram = *(&ngram + sizeof(char *));
            currchar = ngram;
        }
    }


    return;
}

char *ngram_rm(node *root, char *str){
    return "";
}
