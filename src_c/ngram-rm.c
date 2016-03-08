#include "ngram-rm.h"
#include <stdlib.h>
#include <string.h>


int main(){
    return 0;
}

/* This step will make the subsequent deletion significantly faster
   especially when using the same set of ngrams on many strings 
   NOTE: The ngrams must be null-terminated */
void preprocess(node *root, char **ngrams, unsigned int ngram_cnt){
    
    node *currnode = root;
    char *ngram = ngrams[0];
    char *currchar = ngram;

    while(1){

        // Extend the current branch or start a new one
        if(currnode->child_cnt == 0 || !has_child(currnode, *currchar)){
            node *newchild = (node *)malloc(sizeof(node));
            newchild->depth = currnode->depth + 1;
            newchild->in_edge = *currchar;

            char *childval = (char *)malloc(newchild->depth);
            memcpy(childval, currnode->value, currnode->depth);

            childval[currnode->depth] = *currchar;
            
            currnode->child_cnt++;
            currnode->children = (node **)malloc(sizeof(node *));
            currnode->children[0] = newchild;
        } 
        
        //TODO: Follow the current branch
        else {
             
        }

        // Go to the next character of the current ngram
        currchar += sizeof(char);

        // Check we haven't run out of ngrams
        if(ngram_cnt == 0){
            break;
        }
        ngram_cnt--;

        // Move to next ngram
        if(*currchar == 0){
            ngram = *(&ngram + sizeof(char *));
            currchar = ngram;
        }
    }


    return;
}

short has_child(node *currnode, char childchar){
    int cnt;
    node *child = currnode->children[0];
    for(cnt = 0; cnt < currnode->child_cnt; cnt++){
        if (child->in_edge == childchar){
            return 1;
        }
        child = *(&child + sizeof(node *));
    }

    return 0;
}

char *ngram_rm(node *root, char *str){
    return "";
}
